#include <math.h>
#include <stdio.h>

int invertNumber(int num) {
  int invertedNumber = 0, copy = num, i = 0;
  while (copy != 0) {
    copy /= 10;
    i++;
  }
  while (i-- > 0) {
    invertedNumber += (num % 10) * pow(10, i);
    num /= 10;
  }

  return invertedNumber;
}

int main() {
  printf("1234 invertido: %d\n", invertNumber(1234));
  return 0;
}
