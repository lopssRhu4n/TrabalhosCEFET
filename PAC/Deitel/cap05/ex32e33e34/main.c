#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void goodMessage(int choice) {
  switch (choice) {
  case 1:
    printf("Muito bem!\n");
    break;
  case 2:
    printf("Excelente!\n");
    break;
  case 3:
    printf("Bom trabalho!\n");
    break;
  case 4:
    printf("Certo. Continue assim!\n");
    break;
  }
}

void mistakeMessage(int choice) {
  switch (choice) {
  case 1:
    printf("Não. Tente novamente, por favor.\n");
    break;
  case 2:
    printf("Errado. Tente mais uma vez.\n");
    break;
  case 3:
    printf("Não desista!\n");
    break;
  case 4:
    printf("Não. Continue tentando!\n");
    break;
  }
}

int main() {
  int num1, num2, inputNum = 1, resultNum = 1, cont = 0, qtyAcertos = 0;
  float percentage;
  srand(time(NULL));

  while (inputNum != -1) {
    num1 = rand() % 10;
    num2 = rand() % 10;

    if (cont == 10) {
      percentage = (float)qtyAcertos / cont * 100;
      if (percentage < 75) {
        printf("Por favor, solicite ajuda extra ao professor!\n");
        break;
      }
      printf("Porcentagem de acerto das últimas 10 questões: %.2f \n",
             percentage);
      cont = 0;
      qtyAcertos = 0;
    }

    cont++;

    resultNum = num1 * num2;
    printf("Qual é o resultado de %d X %d? ", num1, num2);
    scanf("%d", &inputNum);

    if (inputNum == resultNum) {
      goodMessage(rand() % 4);
      qtyAcertos++;
      continue;
    }

    while (inputNum != resultNum && inputNum != -1) {
      mistakeMessage(rand() % 4);
      scanf("%d", &inputNum);
    }
  }

  return 0;
}
