#include <stdio.h>

int definesPerfect(int num) {
  int soma = 0;
  for (int i = 1; i <= num / 2; i++) {
    if (num % i == 0)
      soma += i;
  }

  return soma == num;
}

int main() {

  for (int i = 1; i <= 1000; i++) {
    if (definesPerfect(i))
      printf("O número %d é perfeito!\n", i);
  }
  return 0;
}
