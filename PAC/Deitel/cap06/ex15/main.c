#include <stdio.h>

int buscaNum(int num, int arr[], int size) {
  int indiceNum = -1;
  for (int i = 0; i < size; i++) {
    if (arr[i] == num) {
      indiceNum = i;
      return indiceNum;
    }
  }
  return indiceNum;
}

int main() {

  int numsArr[20] = {0}, inputNum;

  for (int i = 0; i < 20; i++) {
    scanf("%d", &inputNum);
    if (buscaNum(inputNum, numsArr, 20) == -1)
      printf("Primeira ocorrência de %d\n", inputNum);

    numsArr[i] = inputNum;
  }

  return 0;
}
