#include <math.h>
#include <stdio.h>

float calculaTaxas(float horas) {
  float taxa = 2.0;
  if (horas > 3) {
    taxa += .5 * ceilf(horas - 3);
  }
  return taxa > 10.00 ? 10.00 : taxa;
}

int main() {
  float taxas[3], hora, horas[3], totalTaxas = 0, totalHoras = 0;

  for (int i = 1; i <= 3; i++) {
    printf("entre com as horas do carro %d: ", i);
    scanf("%f", &hora);
    horas[i - 1] = hora;
    taxas[i - 1] = calculaTaxas(hora);
    totalTaxas += taxas[i - 1];
    totalHoras += horas[i - 1];
  }

  printf("Carro 		Horas	Taxa\n");
  for (int i = 1; i <= 3; i++)
    printf("%d 		%.2f	%.2f\n", i, horas[i - 1], taxas[i - 1]);
  printf("TOTAL  		%.2f	%.2f\n", totalHoras, totalTaxas);

  return 0;
}
