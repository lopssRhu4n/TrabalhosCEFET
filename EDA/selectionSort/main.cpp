#include "../utils/utils.h"
#include "array"
#include "iostream"

using namespace std;

void selectionSort(int arr[], int len, int ordem) {
  int indiceTroca, j, aux, i;

  for (i = 0; i < len - 1; ++i) {
    indiceTroca = i;

    for (j = i + 1; j < len; ++j) {
      if (ordem > 0 ? arr[j] < arr[indiceTroca] : arr[j] > arr[indiceTroca])
        indiceTroca = j;
    }

    aux = arr[i];
    arr[i] = arr[indiceTroca];
    arr[indiceTroca] = aux;
  }
}

void trataArray(int arr[], int len) {
  preencheArray(arr, len);
  selectionSort(arr, len, 1);
  printaArray(arr, len);
  cout << "\n";
  selectionSort(arr, len, -1);
  printaArray(arr, len);
}

int main() {
  int myArr[6], myArr2[34];
  int len = sizeof(myArr) / sizeof(myArr[0]);
  trataArray(myArr, len);
  //
  cout << "\n";
  //
  len = sizeof(myArr2) / sizeof(myArr2[0]);
  trataArray(myArr2, len);

  return 0;
}
