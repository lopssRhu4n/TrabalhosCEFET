#include <stdio.h>

int main() {

  // float pi = 0;

  // for (int i = 1; i < 300; i += 4) {
  //   pi += (float)((float)4 / i) - (float)((float)4 / (i + 2));
  //   printf("Valor de pi: %.10f\n", pi);
  // }
  //

  float pi = 3;

  for (int i = 2; i < 300; i += 4) {
    pi += (float)((4.0 / (i * (i + 1) * (i + 2))) -
                  (4.0 / ((i + 2) * (i + 3) * (i + 4))));
    printf("Valor de pi: %.10f\n", pi);
  }

  return 0;
}
