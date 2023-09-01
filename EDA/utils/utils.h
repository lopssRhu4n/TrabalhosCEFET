#include <iostream>
using namespace std;

void printaArray(int arr[], int len) {
  cout << "{ ";
  for (int i = 0; i < len; i++)
    cout << arr[i] << " ";

  cout << "}\n";
}

void preencheArray(int arr[], int len) {
  srand(time(nullptr));
  for (int i = 0; i < len; i++)
    arr[i] = (rand() - (RAND_MAX / 2)) % 10;
}

void sort(int arr[], int len) {
  int aux;
  cout << "Bubble\n";
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        aux = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = aux;
      }
    }
  }
}
