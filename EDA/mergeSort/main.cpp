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
  //
  // cout << "B | H | E " << begin << " " << half << " " << end << endl;
  // cout << "ArrL" << endl;
  // printaArray(arrLeft, lenL);
  // cout << "L: " << lenL << " R: " << lenR << endl;
  // printaArray(arrRight, lenR);
  // cout << "ArrR" << endl;
  // cout << endl;

  l = r = 0;
  // cout << endl;

  for (int k = begin; k <= end + 1; k++) {
    // cout << "Iterator: " << k << " L iterator" << l << " right iterator: " <<
    // r
    // << endl;
    // cout << "Val left: " << arrLeft[l] << " | Val Right: " << arrRight[r]
    //      << endl;
    // cout << (arrLeft[l] <= arrRight[r]) << endl;
    // cout << arrRight[r] << " Elemento da direita" << endl;
    // cout << l << "|" << r << "| K: " << k << endl;
    if (l < lenL && (arrLeft[l] <= arrRight[r] || r >= lenR)) {
      // if (l < lenL) {
      // cout << "Entrou esquerda\n";
      arr[k] = arrLeft[l];
      // cout << "Left counter: " << l << endl;
      l++;
      // }
    } else {
      if (r < lenR) {
        // cout << "Entrou direita\n";
        arr[k] = arrRight[r];
        // cout << "Right counter: " << r << endl;
        r++;
      }
    }
  }

  // cout << endl;
}

void mergeSort(int arr[], int begin, int end) {
  if (begin < end) {
    int half = (begin + end) / 2;
    // cout << "B: " << begin << " E: " << end << " H: " << half << endl;
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
  // int myArr[20] = {0};
  //
  // preencheArray(myArr, 20);
  // printaArray(myArr, 20);
  // mergeSort(myArr, 0, 19);
  // printaArray(myArr, 20);

  return 0;
}
