#include "./cards.cpp"
#include <clocale>
#include <cstdio>
#include <cstdlib>

// Positions for bottom stacks 60 + (j * 5), i + 15

void printDeck() {

  Card *spades[14];

  for (int i = 0; i < 14; i++) {
    for (int j = 0; j < 4; j++) {
      spades[i] = NewCard(i, j);
      if (spades[i] == NULL) {
        cout << "Error in Card " << i << " Pointer null";
        exit(1);
      }

      printCard(*spades[i], 60 + (j * 6), i + 15);
    }
  }
}

void printRightTopCornerStacks() {
  for (int i = 1; i <= 4; i++) {
    printEmptyCardStack((i * 6) + 100, 0);
  }
}

void printLeftCornerStacks() {
  for (int i = 1; i <= 4; i++) {
    printEmptyCardStack((i * 6) + 5, 0);
  }
}

int main(int argc, char *argv[]) {

  cout << "\x1b[2J"; // clear screen
  setlocale(LC_CTYPE, "");
  printRightTopCornerStacks();

  cout << "\033[H";
  printLeftCornerStacks();

  cout << "\033[H";
  printDeck();

  cout << "\033[H";
  getchar();

  return 0;
}
