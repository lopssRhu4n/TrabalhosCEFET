#include <stdio.h>

int main() {

  int contador = 0, soma = 0, num;

  printf("Entre com o número a ser somado (9999 termina): ");
  scanf("%d", &num);

  while (num != 9999) {

    soma += num;
    contador++;
    printf("Entre com o número a ser somado (9999 termina): ");
    scanf("%d", &num);
  }

  printf("A média é: %.2f\n", (float)soma / contador);

  return 0;
}
