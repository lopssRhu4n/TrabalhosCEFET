#include <stdio.h>

void bubbleSort(int arr[], int size) {
  int intermediate;

  for (int j = 0; j < size; j++) {
    int permutas = 0;
    for (int i = 0; i < size - j - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        permutas++;
        intermediate = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = intermediate;
      }
    }
    if (permutas == 0)
      break;
  }
}

int main() {
  int arr[10] = {2, 4, 3, 6, 1, 7, 8, 10, 5, 9};

  printf("{ ");
  for (int i = 0; i < 10; i++)
    printf("%d, ", arr[i]);
  printf("}\n");

  bubbleSort(arr, 10);

  printf("{ ");
  for (int i = 0; i < 10; i++)
    printf("%d, ", arr[i]);
  printf("}\n");

  return 0;
}
