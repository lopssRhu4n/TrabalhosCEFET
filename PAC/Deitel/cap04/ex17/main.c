#include <stdio.h>

int main() {

  int account;
  float creditBefore, creditNow, debit, total;

  printf("Entre com a conta: (-1 para sair): ");
  scanf("%d", &account);
  while (account != -1) {
    printf("Entre com a quantidade de crédito: ");
    scanf("%f", &creditBefore);
    printf("Entre com a quantidade a dever: ");
    scanf("%f", &debit);

    creditNow = creditBefore / 2;
    total = creditNow - debit;

    printf("O saldo atual é: %.2f\n", total);
    if (total < 0) {
      printf("O cliente de conta %d excedeu seu limite de crédito!\n", account);
    }

    printf("Entre com a próxima conta: ");
    scanf("%d", &account);
  }

  return 0;
}

