#include <cstdlib>
#include <iostream>
using namespace std;

void insertionSort(int arr[], int len, int ordem) {
  int i, j, aux, indiceAux;
  bool isAscending = ordem > 0;
  for (i = 1; i < len; i++) {
    if ((isAscending ? arr[i] < arr[i - 1] : arr[i] > arr[i - 1])) {
      aux = arr[i];
      for (j = i - 1; (isAscending ? aux < arr[j] : aux > arr[j]) && j >= 0;
           j--) {
        arr[j + 1] = arr[j];
        indiceAux = j;
      }

      arr[indiceAux] = aux;
    }
  }
}

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

void trataArray(int myArr[], int len) {
  cout << "Array não ordenado: \n";
  preencheArray(myArr, len);
  printaArray(myArr, len);
  insertionSort(myArr, len, 1);
  cout << "Array em ordem crescente: \n";
  printaArray(myArr, len);
  insertionSort(myArr, len, -1);
  cout << "Array em ordem decrescente: \n";
  printaArray(myArr, len);

  cout << "\n\n";
}

int main() {

  int myArr[20] = {0};
  int myArr2[15] = {0};
  int myArr3[54] = {0};
  int myArr4[12] = {0};

  int len;

  len = sizeof(myArr) / sizeof(myArr[0]);
  trataArray(myArr, len);
  len = sizeof(myArr2) / sizeof(myArr2[0]);
  trataArray(myArr2, len);
  len = sizeof(myArr3) / sizeof(myArr3[0]);
  trataArray(myArr3, len);
  len = sizeof(myArr4) / sizeof(myArr4[0]);
  trataArray(myArr4, len);
  return 0;
}
