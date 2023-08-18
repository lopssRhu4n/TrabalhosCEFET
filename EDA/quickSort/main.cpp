#include "../utils/utils.h"
#include <iostream>

using namespace std;

void troca(int *nptr1, int *nptr2) {
  int aux = *nptr1;
  *nptr1 = *nptr2;
  *nptr2 = aux;
}

void quickSort(int arr[], int inicio, int fim) {
  int i, j, distancia;

  distancia = fim - inicio;
  if (distancia < 2) {
    if ((distancia) == 1) {
      if (arr[inicio] > arr[fim]) {
        troca(&arr[inicio], &arr[fim]);
      }
    }
  } else {

    i = inicio;
    j = fim;
    int chave = arr[inicio];

    while (j > i) {
      i++;
      while (arr[i] < chave) {
        i++;
      }
      while (arr[j] > chave) {
        j--;
      }

      if (j > i) {
        troca(&arr[i], &arr[j]);
      }
    }

    troca(&arr[inicio], &arr[j]);
    quickSort(arr, inicio, j - 1);
    quickSort(arr, j + 1, fim);
  }
}

int main() {

  int len;

  srand(time(nullptr));

  for (int i = 0; i < 8; i++) {

    len = rand() % 100;
    int arr[len];
    preencheArray(arr, len);
    cout << "DESORDENADO: " << endl;
    printaArray(arr, len);
    quickSort(arr, 0, len - 1);
    cout << "ORDENADO: " << endl;
    printaArray(arr, len);
  }

  return 0;
}
