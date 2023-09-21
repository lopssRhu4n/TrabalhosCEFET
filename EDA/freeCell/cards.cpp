#include <iostream>

using namespace std;

string cardsString[14] = {"A", "1", "2", "3",  "4", "5", "6",
                          "7", "8", "9", "10", "J", "Q", "K"};

enum Suits { Diamons, Hearts, Club, Spades };

typedef struct {
  int value;
  int suit;
} card;
