#include <stdio.h>

typedef struct {
  int numConta;
  float saldoCliente;
} Cliente;

void exibe(Cliente clientes[], int qtClientes, float saldoMedio) {
  for (int i = 0; i < qtClientes; i++) {
    printf("Número da conta: %d | Saldo da conta: %.2f ", clientes[i].numConta,
           clientes[i].saldoCliente);
    if (clientes[i].saldoCliente > saldoMedio) {
      printf("| Cliente com saldo acima da média!\n");
    } else if (clientes[i].saldoCliente == saldoMedio) {
      printf("| Cliente com saldo na média\n");
    } else {
      printf("| Cliente com saldo abaixo da média!\n");
    }
  }
}

float calculaMediaSaldos(Cliente clientes[], int qtClientes) {
  float media = 0;
  for (int i = 0; i < qtClientes; i++) {
    media += clientes[i].saldoCliente;
  }
  return media / qtClientes;
}

int main() {
  Cliente clientesBanco[10573];
  int contaCliente;
  int qtClientes = 0;
  float saldoCLiente, media;

  // printf("Entre com o número da conta do cliente: ");
  scanf("%d", &contaCliente);

  while (contaCliente != 0) {
    // printf("Entre com o saldo do cliente: ");
    scanf("%f", &saldoCLiente);
    clientesBanco[qtClientes].saldoCliente = saldoCLiente;
    clientesBanco[qtClientes].numConta = contaCliente;

    // printf("Entre com o número da conta do cliente: ");

    qtClientes++;
    scanf("%d", &contaCliente);
  }

  media = calculaMediaSaldos(clientesBanco, qtClientes);
  printf("Média de saldo do banco: %.2f\n\n", media);

  exibe(clientesBanco, qtClientes, media);

  return 0;
}
