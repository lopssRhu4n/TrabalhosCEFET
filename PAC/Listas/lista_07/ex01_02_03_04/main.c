#include <stdio.h>

int produtosVetor(int arr[], int qt) {
  int produto = 1;
  for (int i = 0; i < qt; i++) {
    produto *= arr[i];
  }

  return produto;
}

void defineParesEImpares(int arr[], int qt, int *qtPares, int *qtImpares) {

  for (int i = 0; i < qt; i++) {
    if (arr[i] % 2 == 0)
      (*qtPares)++;
    else
      (*qtImpares)++;
  }
}

int valoresAcimaDaMedia(float arr[], int qt, float media) {
  int qtAcimaDaMedia = 0;

  for (int i = 0; i < qt; i++) {
    if (arr[i] > media)
      qtAcimaDaMedia++;
  }

  return qtAcimaDaMedia;
}

int valoresMenoresQueOAnterior(float arr[], int qt) {
  int qtMenoresQueAnterior = 0;

  for (int i = 1; i < qt; i++) {
    if (arr[i] < arr[i - 1])
      qtMenoresQueAnterior++;
  }

  return qtMenoresQueAnterior;
}

int main() { return 0; }
