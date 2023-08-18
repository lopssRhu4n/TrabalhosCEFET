#include <stdio.h>

int main() {
  int quant, num, menorNum;

  printf("Entre com o número de inteiros: ");
  scanf("%d", &quant);

  for (int i = 0; i < quant; i++) {
    printf("Entre com o número: ");
    scanf("%d", &num);
    if (i == 0) {
      menorNum = num;
      continue;
    }
    if (num < menorNum)
      menorNum = num;
  }

  printf("O menor número é: %d\n", menorNum);

  return 0;
}
