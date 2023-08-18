#include <stdio.h>

int potencia(int base, int expoente) {
  if (expoente == 1)
    return base;
  return base * potencia(base, expoente - 1);
}

int main() {

  printf("3 ^ 1: %d\n", potencia(3, 1));
  printf("3 ^ 2: %d\n", potencia(3, 2));
  printf("4 ^ 3: %d\n", potencia(4, 3));
  printf("5 ^ 3: %d\n", potencia(5, 3));

  return 0;
}
