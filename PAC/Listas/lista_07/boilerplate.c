#include <stdio.h>

typedef struct {
  int km;
  int gasolina;
} carro;

typedef struct {
  int cars[3];
} Concessionaria;

void trataStructEmStruct(Concessionaria *conc) { carro MyCar = conc->cars[1]; }

int trataCarroAPartirDePonteiro(carro meu_carro) {
  int totalKmPorGasolina = meu_carro.km * meu_carro.gasolina;
  return totalKmPorGasolina;
}

void printCarro(carro car) {
  printf("km: %d\ngas: %d\n", car.km, car.gasolina);
}

int main() {
  carro myCar = {10, 21};
  myCar.km = 45;
  carro mySecondCar = {25, 30};
  int xablau = 1;
  carro MyCars[] = {myCar, mySecondCar, {21, 23}};

  Concessionaria conc = {};
  conc.cars = {'\0'};
  for (int i = 0; i < 10; i++) {
    printf("--- %d\n", conc.cars[i].km);
  }
  for (int i = 0; i < 3; i++) {
    printCarro(MyCars[i]);
  }

  //
  // printf("%p - Struct Pointer  | %p - Gas Pointe | %p - KM Pointer\n",
  // &myCar,
  //        &myCar.gasolina, &myCar.km);
  //
  // printf("%p - boilerplate\n", &xablau);
  return 0;
}
