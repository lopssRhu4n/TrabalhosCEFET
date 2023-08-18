#include <stdio.h>

typedef struct {
  int qtd;
  float soma;
} depto;

void trataDepartamento(depto arr[]) {
  for (int i = 0; i < 30; i++) {
    printf("Código do departamento: %d\n", i);
    printf("Salário médio: %.2f\n", arr[i].soma / arr[i].qtd);
  }
}


struct _Aluno {
  int nota;
};

typedef struct _Aluno Aluno;

int main() { return 0; }
