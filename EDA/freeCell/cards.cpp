#include <iostream>
#include <locale.h>
#include <wchar.h>

using namespace std;

string cardsString[14] = {"A", "1", "2", "3",  "4", "5", "6",
                          "7", "8", "9", "10", "J", "Q", "K"};

const wchar_t defaultCard = 0x1F0A1;

string suitsString[4] = {"♦", "♥", "♣", "♠"};
string colorsCode[4] = {"\033[1;31;47m ", "\033[1;31;47m ", "\033[1;30;47m ",
                        "\033[1;30;47m "};

enum Suits { Diamonds, Hearts, Club, Spades };

typedef struct {
  int value;
  int suit;
} Card;

Card *NewCard(int val, int suit) {
  Card *c = new Card;
  if (suit == Diamonds || suit == Hearts || suit == Club || suit == Spades) {
    c->suit = suit;
  } else {
    return NULL;
  }

  if (val >= 0 && val < 14) {
    c->value = val;
    return c;
  } else {
    return NULL;
  }
};

void printCard(Card c, int x, int y) {
  cout << "\033[H";
  cout << "\033[" << x << "C"
       << "\033[" << y + 1 << "B" << colorsCode[c.suit] << cardsString[c.value]
       << suitsString[c.suit] << " \033[m ";

  // if (c.suit == 0 || c.suit == 3) {
  //   wprintf(L"\033[30m\033[47m");
  // } else {
  //   wprintf(L"\033[31m\033[47m");
  // }
  // wprintf(L"%lc \033[0m", (defaultCard + (c.value) + (c.suit * 16)));
}

void printEmptyCardStack(int x, int y) {
  cout << "\033[H";

  cout << "\033[" << x << "C"
       << "\033[" << y << "B"
       << "\033[1;30;47m"
       << "  A  "
       << "\033[m";
}
