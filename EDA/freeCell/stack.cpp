#include "./cards.cpp"
#include <iostream>

using namespace std;

typedef struct n {
  Card *card;
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

Node *NewNode() {
  Node *n = new Node;
  n->next = NULL;
  n->card = NULL;
  return n;
}

Stack *NewStack() {
  Stack *s = new Stack;
  s->top = NULL;
  s->size = 0;
  s->add = NULL;
  s->remove = NULL;

  return s;
}
