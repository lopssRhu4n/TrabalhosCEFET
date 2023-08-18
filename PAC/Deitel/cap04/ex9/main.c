#include <stdio.h>

int main() {
  int qty, soma = 0, num;

  printf("Entre com o número de inteiros a serem somados: ");
  scanf("%d", &qty);
  for (int i = 0; i < qty; i++) {
    printf("Entre com o número a somar: ");
    scanf("%d", &num);

    soma += num;
  }

  printf("Soma total: %d\n", soma);

  return 0;
}
