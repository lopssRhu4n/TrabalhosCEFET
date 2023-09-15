#include <iostream>
using namespace std;

typedef struct N {
  int value;
  N *next;
} Node;

typedef struct {
  int length;
  Node *first;
  Node *last;
} List;

void setupList(List *L) {

  L->length = 0;
  L->first = nullptr;
  L->last = nullptr;
}

Node newNode(int val, Node *ptr) {
  Node node;
  node.value = val;
  node.next = ptr == nullptr ? nullptr : ptr;

  return node;
}

void resolveNodes(Node *savePrev, Node *saveNext, Node *insertNode, int index,
                  List *list) {
  Node *current;
  int listIndex = 0;

  current = list->first;

  while (listIndex <= index) {
    current = current->next;
    listIndex++;
  }

  insertNode->next = current->next;
  current->next = insertNode;
}

void addToList(int index, int val, List *list) {
  Node node;

  if (index < 0) {
    node = newNode(val, nullptr);
    list->last = list->last->next = &node;
    list->length++;
    return;
  }

  if (index == 0) {
    node = newNode(val, list->first);
    list->first = &node;
    list->length++;
    return;
  }

  if (index > list->length) {
    return;
  }

  Node *prevNode, *nextNode;

  resolveNodes(prevNode, nextNode, &node, index, list);
  list->length++;
}

void printList(List *list) {
  int i;
  Node *cur;
  cur = list->first;

  cout << "[ ";
  for (i = 1; i <= list->length; i++) {
    cout << cur->value << ", " << cur->next;
    if (cur->next != nullptr) {
      cout << " -> ";
      cur = cur->next;
    }
  }

  cout << " ]\n";
}

int main() {

  List myList;
  Node n, n2, n3;

  setupList(&myList);

  n = newNode(5, nullptr);

  n2 = newNode(6, &n);

  myList.first = &n2;
  myList.length++;
  myList.length++;

  n3 = newNode(16, &n);

  myList.first->next = &n3;
  myList.length++;

  printList(&myList);

  return 0;
}
