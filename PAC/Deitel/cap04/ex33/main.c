#include <math.h>
#include <stdio.h>

void converteBinario(int num) {
  int cont = 0;
  int binArray[30] = {};

  while (num >= 1) {
    binArray[cont] = num % 2;
    num /= 2;
    cont++;
  }

  for (int i = cont; i >= 0; i--) {
    printf("%d ", binArray[i]);
  }
}

void switchHexaDigit(int digit) {
  switch (digit) {
  case 10:
    printf("A");
    break;
  case 11:
    printf("B");
    break;
  case 12:
    printf("C");
    break;
  case 13:
    printf("D");
    break;
  case 14:
    printf("E");
    break;
  case 15:
    printf("F");
    break;
  }
}

void converteHexadecimal(int num) {
  int resto, hexaArray[30], cont = 0;
  while (num >= 1) {
    hexaArray[cont] = num % 16;
    num /= 16;
    cont++;
  }

  for (int i = cont; i >= 0; i--) {
    if (hexaArray[i] > 9) {
      switchHexaDigit(hexaArray[i]);
    } else {
      printf("%d", hexaArray[i]);
    }
  }
}

int main() {

  for (int i = 1; i <= 256; i++) {
    printf("| %d | ", i);
    converteBinario(i);
    printf(" | ");
    converteHexadecimal(i);
    printf(" |\n");
  }
  return 0;
}
