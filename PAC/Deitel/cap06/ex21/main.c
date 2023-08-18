#include <stdio.h>

int search(int arr[], int comeco, int final) {
  for (int i = comeco; i < final; i++) {
    if (arr[i] == 0) {
      arr[i] = 1;
      return i + 1;
    }
  }
  return -1;
}

int escolheLugar(int arrLugares[10], int tipoLugar) {
  int comeco, final;
  if (tipoLugar == 1) {
    comeco = 0;
    final = 5;
  } else {
    comeco = 5;
    final = 10;
  }
  return search(arrLugares, comeco, final);
}

int restamLugares(int arrLugares[]) {
  for (int i = 0; i < 10; i++) {
    if (arrLugares[i] == 0)
      return 1;
  }
  return 0;
}

int main() {

  int arrLugares[10] = {0}, tipoLugar, continuar, lugarEscolhido;

  while (restamLugares(arrLugares)) {

    printf("Escolha seu lugar:\n");
    printf(
        "Por favor, escolha 1 para 'fumante'\nPor favor, escolha 2 para 'não "
        "fumante'\n");
    scanf("%d", &tipoLugar);
    lugarEscolhido = escolheLugar(arrLugares, tipoLugar);

    if (lugarEscolhido == -1) {
      printf("Não há lugares disponíveis no setor %s.\n",
             tipoLugar == 1 ? "fumantes" : "não fumantes");
      printf("Deseja um lugar no setor de %s?\n",
             tipoLugar == 1 ? "não fumantes" : "fumantes");

      scanf("%d", &continuar);

      if (continuar)
        lugarEscolhido = escolheLugar(arrLugares, tipoLugar == 1 ? 2 : 1);

      else {
        printf("Próximo vôo partirá em 3 horas!");
        break;
      }
    } else {
      printf("O lugar escolhido foi: %d\n", lugarEscolhido);
    }
  }

  return 0;
}
