#include <stdio.h>
#define QTFUNCS 20

typedef struct {
  float salario;
  int departamento;
} Funcionario;

typedef struct {
  float salarios[20];
  int qtFunc;
} Departamento;

int inicializa(float salariosArr[], Funcionario funcs[], int codDep) {

  int qtFunc = 0;
  for (int i = 0; i < QTFUNCS; i++) {
    if (funcs[i].departamento == codDep) {
      salariosArr[qtFunc] = funcs[i].salario;
      qtFunc++;
    }
  }

  return qtFunc;
}

void exibe(float salariosArr[], int qt, int codeDep) {
  float minSalario = 0.0;
  for (int i = 0; i < qt; i++) {
    if (i == 0)
      minSalario = salariosArr[i];
    else if (salariosArr[i] < minSalario && salariosArr[i] != 0) {
      minSalario = salariosArr[i];
    }
  }

  printf("Menor salário do departamento %d: %.2f\n", codeDep, minSalario);
}

int main() {
  // O índice do Array funciona como código do departamento.
  Departamento Deptos[11];
  Funcionario Funcs[500];

  for (int i = 0; i < QTFUNCS; i++) {
    scanf("%d", &Funcs[i].departamento);
    scanf("%f", &Funcs[i].salario);
  }

  for (int i = 1; i < 11; i++) {
    Deptos[i].qtFunc = inicializa(Deptos[i].salarios, Funcs, i);
    exibe(Deptos[i].salarios, Deptos[i].qtFunc, i);
  }

  return 0;
}

