#include <stdio.h>

int calculaSeSaoNumsDePitagoras(int num1, int num2, int num3) {
  return ((num1 * num1) + (num2 * num2) == (num3) * (num3));
}

int main() {

  for (int i = 1; i < 500; i++) {
    for (int j = 1; j < 500; j++) {
      for (int k = 1; k < 500; k++) {
        if (calculaSeSaoNumsDePitagoras(i, j, k))
          printf("%d, %d e %d são números de pitágora!\n", i, j, k);
      }
    }
  }

  return 0;
}
