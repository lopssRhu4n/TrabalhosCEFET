#include <stdio.h>

int main() {

  int prod, quant;
  float preco;

  printf("Entre com o código do produto (-1 para sair): ");
  scanf("%d", &prod);
  while (prod != -1) {
    printf("Entre com a quantidade do produto: ");
    scanf("%d", &quant);

    switch (prod) {
    case 1:
      preco = 2.98 * quant;
      break;
    case 2:
      preco = 4.5 * quant;
      break;
    case 3:
      preco = 9.98 * quant;
      break;
    case 4:
      preco = 4.49 * quant;
      break;
    case 5:
      preco = 6.87 * quant;
      break;
    default:
      preco = 0;
    }

    printf("O preço total foi : %.2f\n", preco);

    printf("Entre com o código do próximo produto: ");
    scanf("%d", &prod);
  }

  return 0;
}
