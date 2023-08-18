#include <stdio.h>

int seatsArr[10] = {0};

void showDisponibleSeats() {
  printf("Smokers		Not Smokers\n");
  for (int i = 0; i < 5; i++) {
    printf("%d  - [%c]		%d  - [%c]\n", i + 1,
           seatsArr[i] == 0 ? ' ' : 'x', i + 6,
           seatsArr[i + 5] == 0 ? ' ' : 'x');
  }
}

int markSeat(int seatNumber) {
  if (seatsArr[seatNumber - 1] == 0)
    return seatsArr[seatNumber - 1] = 1;
  return -1;
}

void menu() {
  int chosenSeat, repeat;

  showDisponibleSeats();

  printf("Choose your seat!\n");
  scanf("%d", &chosenSeat);

  if (markSeat(chosenSeat)) {
    printf("The seat %d was booked!\n", chosenSeat);
    printf("Do you want to continue?\n");
    scanf("%d", &repeat);

    if (repeat)
      menu();
  } else {
    printf(
        "The seat %d was already booked!\nDo you want to book any other one?\n",
        chosenSeat);
    scanf("%d", &repeat);
    if (repeat)
      menu();
  }
}

int main() {
  menu();
  return 0;
}
