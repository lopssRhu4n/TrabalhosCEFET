#include <stdio.h>
#include <stdlib.h>

int main() {
  int randNumber, escolha = 1, inputNumber, tentativas = 1;

  while (escolha) {
    randNumber = rand() % 1000;
    printf("Rand: %d\n", randNumber);
    printf("Tenho um número entre 1 e 1000\nVocê pode adivinhar meu número?\n "
           "Por favor, digite seu primeiro palpite: ");
    scanf("%d", &inputNumber);

    while (inputNumber != randNumber) {
      tentativas++;
      if (inputNumber > randNumber)
        printf("Muito alto. Tente novamente!\n");
      else
        printf("Muito baixo. Tente novamente!\n");
      scanf("%d", &inputNumber);
    }

    if (tentativas < 10)
      printf("Ou você sabe o segredo ou tem muita sorte!\n");
    else if (tentativas == 10)
      printf("Você sabe o segredo!\n");
    else
      printf("Você deve ser capaz de fazer melhor!\n");

    printf("Excelente! Você adivinhou o número! Você gostaria de tentar "
           "novamente?\n");
    scanf("%d", &escolha);
    tentativas = 1;
  }

  return 0;
}
