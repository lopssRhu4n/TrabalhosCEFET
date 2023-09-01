#include "../utils/utils.h"
#include <iostream>
using namespace std;

int linearSearch(int arr[], int len, int num) {
  for (int i = 0; i < len; i++) {
    if (arr[i] == num) {
      return i;
    }
  }
  return -1;
}

int binarySearch(int arr[], int begin, int end, int num) {
  int half = (end + begin) / 2;

  if (arr[half] == num) {
    return half;
  }

  if (begin >= end) {
    return -1;
  }

  if (arr[half] > num) {
    return binarySearch(arr, begin, half, num);
  }

  return binarySearch(arr, half + 1, end, num);
}

int main() {
  int arr[10] = {0};
  preencheArray(arr, 10);
  printaArray(arr, 10);
  int achou = linearSearch(arr, 10, 4);
  if (achou < 0) {
    cout << "Não achou\n";
  }

  cout << "Achou " << achou << "\n";

  sort(arr, 10);
  printaArray(arr, 10);
  achou = binarySearch(arr, 0, 10, 4);
  if (achou < 0) {
    cout << "Não achou\n";
    return 0;
  }
  cout << "Achou " << achou << "\n";
}
