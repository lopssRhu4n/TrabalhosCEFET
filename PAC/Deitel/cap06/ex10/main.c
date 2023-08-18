#include <stdio.h>

void defineIntervaloVendedor(int arrIntervalos[], int salario) {
  switch (salario / 100) {
  case 2:
    arrIntervalos[1]++;
    break;
  case 3:
    arrIntervalos[2]++;
    break;
  case 4:
    arrIntervalos[3]++;
    break;
  case 5:
    arrIntervalos[4]++;
    break;
  case 6:
    arrIntervalos[5]++;
    break;
  case 7:
    arrIntervalos[6]++;
    break;
  case 8:
    arrIntervalos[7]++;
    break;
  case 9:
    arrIntervalos[8]++;
    break;
  case 10:
    arrIntervalos[9]++;
    break;
  }

  if ((salario / 100) > 10)
    arrIntervalos[9]++;
}

int main() {

  int arrIntervalos[10] = {0};
  int arrSalarios[] = {250,  278,  312,  412, 459, 413, 500,
                       614,  819,  732,  642, 711, 901, 1002,
                       1006, 1100, 1204, 234, 200, 350, 412};

  for (int i = 0; i < 21; i++) {
    defineIntervaloVendedor(arrIntervalos, arrSalarios[i]);
  }

  printf("Intervalo	Frequência\n");
  for (int i = 1; i <= 9; i++) {
    printf("%d 		%d\n", i, arrIntervalos[i]);
  }

  return 0;
}
