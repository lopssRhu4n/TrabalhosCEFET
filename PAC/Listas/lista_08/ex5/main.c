#include <stdio.h>
#define QTPROD 10

typedef struct {
  int codigo;
  float preco;
  int qtEstoque;
} Produto;

void leitura(Produto produtos[]) {
  int codigo, qtEstoque;
  float preco;
  for (int i = 0; i < QTPROD; i++) {
    scanf("%d%f%d", &codigo, &preco, &qtEstoque);
    produtos[i].codigo = codigo;
    produtos[i].preco = preco;
    produtos[i].qtEstoque = qtEstoque;
  }
}

int busca(Produto produtos[], int codigo) {
  for (int i = 0; i < QTPROD; i++) {
    if (produtos[i].codigo == codigo) {
      return i;
    }
  }

  return -1;
}

int main() {

  Produto produtos[QTPROD];
  int codigoDeBusca, indiceDeBusca;

  leitura(produtos);

  printf("Digite o código de busca de um produto: ");
  scanf("%d", &codigoDeBusca);
  while (codigoDeBusca != 0) {
    indiceDeBusca = busca(produtos, codigoDeBusca);
    if (indiceDeBusca == -1) {
      printf("Produto não encontrado!\n");
    } else {
      printf("Valor do produto: %.2f | Quantidade em estoque: %d\n",
             produtos[indiceDeBusca].preco, produtos[indiceDeBusca].qtEstoque);
    }
    printf("Digite o código de busca de um produto: ");
    scanf("%d", &codigoDeBusca);
  }

  return 0;
}
