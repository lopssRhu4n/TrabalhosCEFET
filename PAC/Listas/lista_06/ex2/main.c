#include <stdio.h>

void descreveEContabilizaProduto(char tipoProduto, int *qtNacionais,
                                 int *qtImportados) {
  if (tipoProduto == 'N') {
    (*qtNacionais)++;
    printf("Produto do tipo nacional.\n");
  } else if (tipoProduto == 'I') {
    (*qtImportados)++;
    printf("Produto do tipo	importado.\n");
  } else {
    printf("Tipo inválido!\n");
  }
}

int main() {
  int codigoProduto, qtEstoque, qtNacionais = 0, qtImportados = 0;
  char tipo;
  float precoUnitario;

  for (int i = 0; i < 10; i++) {
    printf("Entre com o código do produto: ");
    scanf("%d", &codigoProduto);

    printf("Entre com a quantidade em estoque: ");
    scanf("%d", &qtEstoque);

    printf("Entre com o tipo do produto: ");
    scanf(" %c", &tipo);

    printf("Entre com o valor unitario (numero real): ");
    scanf("%f", &precoUnitario);


    printf("O código do produto é: %d\n", codigoProduto);
    printf("O valor em estoque é: %.2f\n", precoUnitario * qtEstoque);

    descreveEContabilizaProduto(tipo, &qtNacionais, &qtImportados);
  }

  printf("Quantidade total de importados: %d\n", qtImportados);
  printf("Quantidade total de nacionais: %d\n", qtNacionais);

  return 0;
}
