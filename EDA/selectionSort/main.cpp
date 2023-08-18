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

void printaArray(int arr[], int len) {
  cout << "{ ";
  for (int i = 0; i < len; i++)
    cout << arr[i] << " ";

  cout << "}";
}

void trataArray(int arr[], int len) {
  selectionSort(arr, len, 1);
  printaArray(arr, len);
  cout << "\n";
  selectionSort(arr, len, -1);
  printaArray(arr, len);
}

int main() {
  int myArr1[] = {3, 2, 6, 1, 5};
  int myArr2[] = {0, -2, 3, 5, 23, 123, 4, -93, 1, 0, 3, 4};
  // int myArr3[] = {-1, 9284, 1293, 4, 5, 912, -149, 0123, -4123, 4};
  // int myArr4[] = {94234, 32, 512, 12, -321, 583, -4395, 123, 0, 0, 1, 9841,
  // 0}; int *mt[4] = {myArr1, myArr2, myArr3, myArr4};

  // for (int i = 0; i < 4; i++) {
  // len = end;
  // trataArray(mt[i], len)
  // }
  int len = sizeof(myArr1) / sizeof(myArr1[0]);
  trataArray(myArr1, len);
  //
  cout << "\n";
  //
  len = sizeof(myArr2) / sizeof(myArr2[0]);
  trataArray(myArr2, len);

  return 0;
}
