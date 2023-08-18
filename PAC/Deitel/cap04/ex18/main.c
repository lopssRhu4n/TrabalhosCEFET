#include <stdio.h>

int main() {

  int num;
  for (int i = 1; i <= 5; i++) {
    scanf("%d", &num);
    if (num >= 1 && num <= 30) {
      for (int j = 1; j <= num; j++) {
        printf("*");
      }
    }
    printf("\n");
  }

  return 0;
}
