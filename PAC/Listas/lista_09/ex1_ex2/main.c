#include <stdio.h>

void exibeTotalVendas(int vendasPorMesAno[6][12], float precosEntreAnos[6]) {
  float totalVendas;
  for (int i = 0; i < 6; i++) {
    totalVendas = 0;
    for (int j = 0; j < 12; j++) {
      totalVendas += vendasPorMesAno[i][j] * precosEntreAnos[i];
    }
    printf("O total de vendas de %d foi: %.2f\n", i + 2010, totalVendas);
  }
};

void analisaVendaDeCombustiveis(int vendasPorDia[31][4],
                                int precoDeVendaPorDia[31][4]) {
  float totalVendasAgosto, totalVendasDia;
  // loop do total de vendas de cada tipo de gasolina em Agosto
  for (int i = 0; i < 4; i++) {
    totalVendasAgosto = 0;
    for (int j = 0; j < 31; j++) {
      totalVendasAgosto += vendasPorDia[j][i] * precoDeVendaPorDia[j][i];
    }
    printf("Total de vendas em Agosto do combustível %d: %.2f\n", i + 1,
           totalVendasAgosto);
  }

  for (int i = 0; i < 31; i++) {
    totalVendasDia = 0;
    for (int j = 0; j < 4; j++) {
      totalVendasDia += vendasPorDia[i][j] * precoDeVendaPorDia[i][j];
    }
    printf("Total de vendas no dia %d: %.2f\n", i + 1, totalVendasDia);
  }
};

int main() { return 0; }
