#include "../utils/utils.h"
#include <iostream>

using namespace std;

void merge(int arr[], int begin, int half, int end) {
  // r => iterator for right
  // l => iterator for left
  int lenL, lenR, i, r, l;
  lenL = half - begin + 1;
  lenR = end - half;

  int arrLeft[lenL], arrRight[lenR];

  for (i = 0; i < lenL; i++) {
    arrLeft[i] = arr[begin + i];
  }

  for (i = 0; i < lenR; i++) {
    arrRight[i] = arr[half + i + 1];
  }

  l = r = 0;

  for (int k = begin; k <= end + 1; k++) {
    if (l < lenL && (arrLeft[l] <= arrRight[r] || r >= lenR)) {
      arr[k] = arrLeft[l];
      l++;
    } else {
      if (r < lenR) {
        arr[k] = arrRight[r];
        r++;
      }
    }
  }
}

void mergeSort(int arr[], int begin, int end) {
  if (begin < end) {
    int half = (begin + end) / 2;
    mergeSort(arr, begin, half);
    mergeSort(arr, half + 1, end);
    merge(arr, begin, half, end);
  }
}

int main() {

  int len;

  srand(time(nullptr));

  for (int i = 0; i < 8; i++) {

    len = rand() % 10;
    int arr[len];
    cout << "Array " << i << ":\n";
    preencheArray(arr, len);
    cout << "DESORDENADO: " << endl;
    printaArray(arr, len);
    mergeSort(arr, 0, len - 1);
    cout << "ORDENADO: " << endl;
    printaArray(arr, len);
    cout << "\n\n";
  }

  return 0;
}
