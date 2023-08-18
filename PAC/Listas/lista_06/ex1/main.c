#include <stdio.h>
#include <string.h>

int leValidaTipo() {

  char tipoProduto[8] = {0};

  printf("Entre com o tipo do produto");
  scanf("%s", tipoProduto);

  if (strcmp(tipoProduto, "fruta") == 0)
    return 1;
  if (strcmp(tipoProduto, "legume") == 0)
    return 2;
  if (strcmp(tipoProduto, "verdura") == 0)
    return 3;

  printf("Tipo inválido!\n");
  return 0;
}

void trataProdutos(int qtProdutos, int *varQtTipo1, int *varQtTipo2,
                   int *varQtTipo3) {

  int codigoProduto, tipoProduto;

  for (int i = 0; i < qtProdutos; i++) {
    printf("Entre com o código do produto: ");
    scanf("%d", &codigoProduto);
    tipoProduto = leValidaTipo();

    switch (tipoProduto) {
    case 1:
      (*varQtTipo1)++;
      break;
    case 2:
      (*varQtTipo2)++;
      break;
    case 3:
      (*varQtTipo3)++;
      break;
    }
  }
}

int main() {
  int qtProds = 5, qt1 = 0, qt2 = 0, qt3 = 0;

  trataProdutos(qtProds, &qt1, &qt2, &qt3);

  printf("Qt1: %d | Qt2: %d | Qt3: %d\n", qt1, qt2, qt3);
  return 0;
}
