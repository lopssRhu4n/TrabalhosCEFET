#include <stdio.h>

void calendarioMes(int mes) {
  int diasDoMes = 31;
  if (mes == 2)
    diasDoMes = 28;
  printf("\nMês: %d\n", mes);
  printf("-------------------------------------------\n");
  printf("|  D  |  S  |  T  |  Q  |  Q  |  S  |  S  |\n");
  printf("-------------------------------------------\n");
  for (int i = 1; i <= diasDoMes; i += 7) {
    for (int j = i; j < i + 7; j++) {
      if (j < 10) {
        printf("|  %d  ", j);
        continue;
      }
      if (j > 31)
        break;
      printf("| %d  ", j);
    }
    printf("|\n-------------------------------------------\n");
  }
}

int main() {

  for (int ano = 1994; ano <= 1999; ano++) {
    printf("Ano: %d\n", ano);
    for (int mes = 1; mes <= 12; mes++) {
      calendarioMes(mes);
    }
  }

  return 0;
}
