#include <iostream>
using namespace std;

typedef struct N {
  int value;
  N *next;
} Node;

typedef struct L {
  int length;
  Node *first;
  Node *last;
  int (*remove)(int, L *);
  int (*add)(int index, int val, L *list);
} List;

void setupList(List *L) {

  L->length = 0;
  L->first = nullptr;
  L->last = nullptr;
}

Node *newNode(int val, Node *ptr) {
  Node *node = new Node;
  node->value = val;
  node->next = ptr;

  return node;
}

void resolveNodes(Node *savePrev, Node *saveNext, Node *insertNode, int index,
                  List *list) {
  Node *current;
  int listIndex = 1;

  current = list->first;

  while (listIndex < index) {
    current = current->next;
    listIndex++;
  }

  insertNode->next = current->next;
  current->next = insertNode;
  list->length++;
}

int removeFromList(int index, List *list) {

  if (index > list->length) {
    return 1;
  }

  if (index == 1) {
    list->first = list->first->next;
    list->length--;
    return 0;
  }

  int i;

  Node *cur = list->first;

  for (int i = 1; i < index - 1; i++) {
    cur = cur->next;
  }

  cur->next = cur->next->next;
  list->length--;

  return 0;
}

int addToList(int index, int val, List *list) {
  Node *node;

  if (index == 0 || list->length == 0) {

    node = newNode(val, list->first);
    list->first = node;

    if (list->length == 0)
      list->last = node;

    list->length++;
    return 0;
  }

  if (index < 0 || index == list->length) {
    node = newNode(val, nullptr);
    list->last = list->last->next = node;
    list->length++;
    return 0;
  }

  if (index > list->length) {
    return 1;
  }

  Node *prevNode, *nextNode;

  node = newNode(val, nullptr);
  resolveNodes(prevNode, nextNode, node, index, list);

  return 0;
}

void printList(List *list) {
  int i;
  Node *cur;
  cur = list->first;

  cout << "[ ";
  for (i = 1; i <= list->length; i++) {
    cout << "(" << cur->value << ", " << cur->next << ")";
    if (cur->next != nullptr) {
      cout << " -> ";
      if (i % 2 == 0)
        cout << endl;
      cur = cur->next;
    }
  }

  cout << " ]\n";
}

int main() {

  List myList;
  Node *n, *n2, *n3;

  myList.remove = &removeFromList;
  myList.add = &addToList;

  setupList(&myList);

  myList.add(0, 5, &myList);
  myList.add(0, 9, &myList);
  myList.add(-1, 15, &myList);
  myList.add(1, 4, &myList);

  printList(&myList);

  myList.remove(2, &myList);
  myList.remove(1, &myList);

  printList(&myList);

  return 0;
}
