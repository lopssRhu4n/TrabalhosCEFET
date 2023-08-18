#include "../utils/utils.h"
#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

typedef struct {
  float salario;
  int matricula;
} Func;

typedef struct {
  int matriculas[16];
  int qt;

} estatisticasSalarios;

void bubbleSort(int arr[], int len) {
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

void selectionSort(int arr[], int len) {
  int aux, indiceMenor;
  cout << "Selection\n";

  for (int i = 0; i < len - 1; ++i) {
    indiceMenor = i;
    for (int j = i + 1; j < len; ++j) {
      if (arr[j] < arr[indiceMenor]) {
        indiceMenor = j;
      }
    }

    aux = arr[i];
    arr[i] = arr[indiceMenor];
    arr[indiceMenor] = aux;
  }
}

void insertionSort(int arr[], int len) {
  int aux, indexInsertion;
  cout << "Insertion\n";

  for (int i = 1; i < len; i++) {
    if (arr[i] < arr[i - 1]) {
      aux = arr[i];
      for (int j = i - 1; j >= 0 && arr[j] > aux; j--) {
        arr[j + 1] = arr[j];
        indexInsertion = j;
      }
      arr[indexInsertion] = aux;
    }
  }
}

void preencheArrayFuncs(Func funcArr[], int len) {
  srand(time(nullptr));
  for (int i = 0; i < len; i++) {
    funcArr[i].matricula = rand() % 10000;
    // funcArr[i].salario = (float)((rand() - (RAND_MAX / 2) % 10000) / 2.0);
    funcArr[i].salario = (float)(rand() % 15 + 1);
  }
}

void printaArrayFuncs(Func funcArr[], int len) {
  for (int i = 0; i < len; i++) {
    cout << "Matricula: " << funcArr[i].matricula << " salario "
         << funcArr[i].salario << endl;
  }
}

void ordenaFuncs(Func funcArr[], int len) {
  int i, j, indiceTroca;
  Func aux;

  for (int i = 1; i < len; i++) {
    if (funcArr[i].salario < funcArr[i - 1].salario) {
      aux = funcArr[i];
      for (int j = i - 1; j >= 0 && funcArr[j].salario > aux.salario; j--) {
        funcArr[j + 1] = funcArr[j];
        indiceTroca = j;
      }

      funcArr[indiceTroca] = aux;
    }
  }
}

void defineMedia(Func funcArr[], int len, float *total, float *media) {
  for (int i = 0; i < len; i++) {
    *total += funcArr[i].salario;
  }

  *media = (float)(*total / len);
}

estatisticasSalarios defineQtEMatriculasAcimaDaMedia(Func funcArr[], int len,
                                                     float media) {
  estatisticasSalarios etSal;
  etSal.qt = 0;

  for (int i = 0; i < len; i++) {
    if (funcArr[i].salario > media) {
      etSal.qt++;
      etSal.matriculas[i] = funcArr[i].matricula;
    }
  }

  etSal.matriculas[etSal.qt + 1] = -1;
  return etSal;
}

void printaEstatisticasDosSalarios(estatisticasSalarios etSal) {
  int i = 0;
  cout << "Quantidade de salários acima da média: " << etSal.qt << endl;
  cout << "Matriculas:\n";
  while (etSal.matriculas[i] != -1) {
    cout << i << endl;
    cout << etSal.matriculas[i] << endl;
    i++;
  }
}

int main() {
  cout << fixed << setprecision(2);
  float totalSalario = 0, mediaSalario;
  int myArr[50] = {0};
  Func arrFunc[15] = {};
  estatisticasSalarios etSal;

  preencheArray(myArr, 50);
  bubbleSort(myArr, 50);
  // selectionSort(myArr, 50);
  // insertionSort(myArr, 50);
  printaArray(myArr, 50);

  preencheArrayFuncs(arrFunc, 15);
  printaArrayFuncs(arrFunc, 15);

  cout << endl;

  ordenaFuncs(arrFunc, 15);
  printaArrayFuncs(arrFunc, 15);

  defineMedia(arrFunc, 15, &totalSalario, &mediaSalario);

  cout << "Total dos salários: " << totalSalario
       << " Média Salarial: " << mediaSalario << endl;

  etSal = defineQtEMatriculasAcimaDaMedia(arrFunc, 15, mediaSalario);
  printaEstatisticasDosSalarios(etSal);

  return 0;
}
