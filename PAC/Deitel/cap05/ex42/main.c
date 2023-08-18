#include <stdio.h>

int mdc(int x, int y) { return y == 0 ? x : mdc(y, x % y); }

int main() {

  printf("mdc 12, 4: %d\n", mdc(12, 4));
  printf("mdc 81, 9: %d\n", mdc(81, 9));
  printf("mdc 7, 4: %d\n", mdc(7, 4));
  printf("mdc 13, 169: %d\n", mdc(13, 169));

  return 0;
}
