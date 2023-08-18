#include <stdio.h>

int leValidaClassificacao() {
  int classificacao;
  printf("Entre com a classificação do produto: ");
  scanf("%d", &classificacao);

  if (classificacao > 0 && classificacao <= 4) {
    return classificacao;
  }

  return 0;
}

void classe(int classificacao, int *qtMaxEstoque, int *qtMinEstoque) {
  printf("Entre com a quantidade máxima em estoque. ");
  scanf("%d", qtMaxEstoque);

  printf("Entre com a quantidade mínima em estoque. ");
  scanf("%d", qtMinEstoque);
}

int main() {
  int codigo, classificacao, qtMaxEstoque, qtMinEstoque;

  for (int i = 0; i < 100; i++) {

    printf("Entre com o código: ");
    scanf("%d", &codigo);

    classificacao = leValidaClassificacao();
    classe(classificacao, &qtMaxEstoque, &qtMinEstoque);

    printf("Codigo: %d\n", codigo);
    printf("qtMax: %d\n", qtMaxEstoque);
    printf("qtMin: %d\n", qtMinEstoque);
  }
  return 0;
}
