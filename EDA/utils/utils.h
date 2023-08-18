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
    arr[i] = (rand() - (RAND_MAX / 2)) % 1000;
}
