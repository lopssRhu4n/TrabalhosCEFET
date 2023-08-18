#include <stdio.h>

int inicializa(int intArr[]) {
  int nota = 0, qtAlunos = 0;

  while (nota != -1) {
    qtAlunos++;
    printf("Entre com a nota do aluno: ");
    scanf("%d", &nota);
    intArr[qtAlunos - 1] = nota;
  }

  return qtAlunos;
}

void exibe(int notasArr[], int qt) {
  int qtNotas[11] = {0};

  for (int i = 0; i < qt; i++) {
    qtNotas[notasArr[i]]++;
  }

  for (int i = 0; i < 11; i++) {
    printf("Quantiade de notas %d: %d\n", i, qtNotas[i]);
  }
}

int main() {

  int notasArr[50] = {0}, qtAlunos;

  qtAlunos = inicializa(notasArr);

  exibe(notasArr, qtAlunos - 1);

  return 0;
}
