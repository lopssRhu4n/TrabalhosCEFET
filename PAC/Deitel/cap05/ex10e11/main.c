#include <math.h>
#include <stdio.h>

float cFloor(float num) { return floor(num + .5); }
float dRound(float num) { return floorf(num * 10 + .5) / 10; }
float cRound(float num) { return floorf(num * 100 + .5) / 100; }
float mRound(float num) { return floorf(num * 1000 + .5) / 1000; }

int main() {
  float num = 0;

  while (num != -1) {
    printf("Entre com um número: ");
    scanf("%f", &num);
    printf("Número: %f |  Arredondamento + Prox: %.2f | Arredondamento Dec: "
           "%.1f | Arredondamento Cent: %.2f | Arredondamento Mili: %.3f\n",
           num, cFloor(num), dRound(num), cRound(num), mRound(num));
  }
  return 0;
}
