#include <stdio.h>

void imprimeQuadrado(char fillChar, int lado) {
  for (int i = 1; i <= lado; i++) {
    for (int j = 1; j <= lado; j++) {
      printf("%c ", fillChar);
    }
    printf("\n");
  }
}

void imprimeTriangulo(char fillChar, int linhas) {
  linhas *= 2;
  for (int i = 1; i <= linhas; i += 2) {
    for (int j = 1; j <= (linhas - i) / 2; j++)
      printf(" ");
    for (int j = 1; j <= i; j++)
      printf("%c", fillChar);
    for (int j = 1; j <= (linhas - i) / 2; j++)
      printf(" ");

    printf("\n");
  }
}

void imprimeLosango(char fillChar, int linhas) {
  imprimeTriangulo(fillChar, linhas / 2);
  for (int i = linhas - 1; i >= 1; i -= 2) {
    for (int j = 1; j <= (linhas - i) / 2; j++)
      printf(" ");
    for (int j = 1; j <= i; j++)
      printf("%c", fillChar);
    for (int j = 1; j <= (linhas - i) / 2; j++)
      printf(" ");

    printf("\n");
  }
}

int main() {

  imprimeQuadrado('#', 5);
  printf("\n");
  imprimeTriangulo('B', 10);
  printf("\n");
  imprimeLosango('P', 10);
  printf("\n");

  return 0;
}
