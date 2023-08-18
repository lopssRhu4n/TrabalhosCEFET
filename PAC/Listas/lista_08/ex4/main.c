#include <stdio.h>
#define QTFUNCS 12
#define QTDPTOS 10

typedef struct {
  int matricula;
  int codeDep;
  int idade;
} Func;

typedef struct {
  int idadeMedia;
  int qtFuncs;
} Depto;

void inicializa(Func funcs[]) {
  int matricula, codeDep, idade;
  for (int i = 0; i < QTFUNCS; i++) {
    scanf("%d", &matricula);
    scanf("%d", &codeDep);
    scanf("%d", &idade);
    funcs[i].matricula = matricula;
    funcs[i].codeDep = codeDep;
    funcs[i].idade = idade;
  }
}

void exibe(Depto deptos[]) {
  for (int i = 0; i < QTDPTOS; i++) {
    printf("Código do departamento: %d | Idade média dos funcionários: %d\n",
           i + 10, deptos[i].idadeMedia);
  }
};

void defineIdadeMediaDepto(Depto deptos[], Func funcs[]) {
  for (int i = 0; i < QTFUNCS; i++) {
    deptos[funcs[i].codeDep - 10].idadeMedia += funcs[i].idade;
    deptos[funcs[i].codeDep - 10].qtFuncs++;
  }

  for (int i = 0; i < QTDPTOS; i++) {
    if (deptos[i].qtFuncs != 0) {
      deptos[i].idadeMedia = deptos[i].idadeMedia / deptos[i].qtFuncs;
    }
  }
}

int main() {
  Depto deptos[QTDPTOS];
  Func funcs[QTFUNCS];

  inicializa(funcs);
  for (int i = 0; i < QTDPTOS; i++) {
    deptos[i].idadeMedia = 0;
    deptos[i].qtFuncs = 0;
  }
  defineIdadeMediaDepto(deptos, funcs);

  exibe(deptos);
  return 0;
}
