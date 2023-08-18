#include <stdio.h>

int buscaNumero(float arr[], int qt, float searchedNum) {
  for (int i = 0; i < qt; i++) {
    if (arr[i] == searchedNum) {
      return i;
    }
  }

  return -1;
}

int main() { return 0; }
