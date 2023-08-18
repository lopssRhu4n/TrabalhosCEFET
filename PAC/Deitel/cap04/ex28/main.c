#include <stdio.h>

int main() {

  int codigo, horasTrab, itensFeitos;
  float salarioSemanal, vendaBruta, valorItem, salarioFixo;

  printf("Entre com o código do tipo do empregado (-1 para sair): ");
  scanf("%d", &codigo);
  while (codigo != -1) {
    switch (codigo) {
    case 1:
      printf("Entre com o salário fixo: ");
      scanf("%f", &salarioSemanal);
    case 2:
      printf("Entre com o salário fixo e o número de horas trabalhadas: ");
      scanf("%f%d", &salarioFixo, &horasTrab);
      salarioSemanal =
          salarioFixo * 40 + (salarioFixo * 1.5 * (horasTrab - 40));
      break;
    case 3:
      printf("Entre com o valor da venda bruta: ");
      scanf("%f", &vendaBruta);
      salarioSemanal = 250 + 0.057 * vendaBruta;
      break;
    case 4:
      printf("Entre com a comissão por item e a quantidade de itens: ");
      scanf("%f%d", &valorItem, &itensFeitos);
      salarioSemanal = valorItem * itensFeitos;
      break;
    default:
      printf("Código incorreto!\n");
      salarioSemanal = -1;
    }

    if (salarioSemanal != -1) {
      printf("O salário semanal foi: %.2f", salarioSemanal);
    }

    printf("Entre com o código do próximo empregado: ");
    scanf("%d", &codigo);
  }

  return 0;
}
