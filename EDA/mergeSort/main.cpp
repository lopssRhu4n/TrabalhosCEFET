#include "../utils/utils.h"
#include <iostream>

using namespace std;

void merge(int arr[], int begin, int half, int end) {
  // r => iterator for right
  // l => iterator for left
  int lenL, lenR, i, r, l;
  lenL = half - begin + 1;
  lenR = end - half;

  // cout << "L: " << lenL << " R: " << lenR << endl;

  int arrLeft[lenL], arrRight[lenR];

  for (i = 0; i < lenL; i++) {
    arrLeft[i] = arr[begin + i - 1];
  }

  for (i = 0; i < lenR; i++) {
    arrRight[i] = arr[half + i];
  }

  // printaArray(arrLeft, lenL);
  // printaArray(arrRight, lenR);

  l = r = 0;

  for (int k = begin; k < end; k++) {
    if (arrLeft[l] <= arrRight[r]) {
      arr[k] = arrLeft[l];
      if (l < lenL)
        l++;
    } else {
      arr[k] = arrRight[r];
      if (r < lenR)
        r++;
    }
  }
}

void mergeSort(int arr[], int begin, int end) {
  if (begin < end) {
    int half = (begin + end) / 2;
    // cout << "B: " << begin << " E: " << end << endl;
    // cout << half;
    mergeSort(arr, begin, half);
    mergeSort(arr, half + 1, end);
    merge(arr, begin, half, end);
  }
}

int main() {

  int myArr[20] = {0};

  preencheArray(myArr, 20);
  printaArray(myArr, 20);
  mergeSort(myArr, 0, 19);
  printaArray(myArr, 20);

  return 0;
}
