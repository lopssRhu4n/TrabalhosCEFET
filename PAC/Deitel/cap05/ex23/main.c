#include <stdio.h>

int calculaHora(int horas, int minutos, int segundos, int ultimaHora) {
  int totalSegundos = horas * 3600 + minutos * 60 + segundos;
  return totalSegundos - ultimaHora;
}

// 2180
int main() {
  int primeiraHora = calculaHora(11, 54, 30, 0),
      diferenca = calculaHora(12, 30, 50, primeiraHora);
  printf("Diferença: %d\n", diferenca);

  return 0;
}
