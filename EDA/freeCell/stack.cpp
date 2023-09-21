#include <iostream>

using namespace std;

typedef struct n {
  int val;
  n *next;
} Node;

typedef struct s {
  Node *top;
  int size;
  void (*add)(s *, Node *);
  void(*remove);
} Stack;

void addToStack(Stack *s, Node *n) {
  if (!s->top) {
    s->top = n;
  } else {
    n->next = s->top;
    s->top = n;
  }

  s->size++;
}

void removeFromStack(Stack *s) {
  if (s->top) {
    Node *aux = s->top;
    s->top = s->top->next;
    s->size--;
  }
}

Stack *NewStack() {
  Stack *s = new Stack;
  s->top = NULL;
  s->size = 0;
  s->add = NULL;
  s->remove = NULL;

  return s;
}

int main(int argc, char *argv[]) {

  cout << "\033[1;4;31;47mbolf Hello World\033[m\n";

  return 0;
}
