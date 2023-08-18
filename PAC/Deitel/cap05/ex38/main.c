#include <stdio.h>

double fibonacci(int n) {
  double num = 0;
  for (int i = n; i >= 1; i--) {
    num += i;
  }
  return num;
}

int main() {
  int i = 1;

  while (i++) {
    printf("%d: %.0f", i, fibonacci(i));
  }
  return 0;
}
