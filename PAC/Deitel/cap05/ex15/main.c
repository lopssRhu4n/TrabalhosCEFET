#include <math.h>
#include <stdio.h>

double hipotenusa(double cat1, double cat2) {
  return sqrt((cat1 * cat1) + (cat2 * cat2));
}

int main() {

  printf("Hip 3.0 4.0: %f\n", hipotenusa(3.0, 4.0));
  printf("Hip 5.0 12.0: %f\n", hipotenusa(5.0, 12.0));
  printf("Hip 8.0 15.0: %f\n", hipotenusa(8.0, 15.0));

  return 0;
}
