

void mergeSort(int arr[], int len) {
  int half = len / 2;
  int halfArr[half];
}

void merge(int arr[], int begin, int half, int end) {
  // r => iterator for right
  // l => iterator for left
  int lenL, lenR, i, r, l;
  lenL = half - begin + 1;
  lenR = end - half;

  int arrLeft[lenL + 1], arrRight[lenR + 1];

  for (i = 0; i < lenL; i++) {
    arrLeft[i] = arr[begin + i - 1];
  }

  for (i = 0; i < lenR; i++) {
    arrRight[i] = arr[half + i];
  }

  arrLeft[lenL + 1] = arrRight[lenR + 1] = -0;

  l = r = 1;

  for (int k = begin; k < end; k++) {
    if (arrLeft[l] <= arrRight[r]) {
      arr[k] = arrLeft[l];
      i++;
    } else {
      arr[k] = arrRight[r];
    }
  }
}

int main() {

  int myArr[20] = {0};

  return 0;
}
