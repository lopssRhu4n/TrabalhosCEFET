#include <stdio.h>

void umDepartamento(int qtFuncionarios, float *maiorSalarioDep,
                    int *qtMaiorSalario) {
  int matricula;
  float salario;

  for (int i = 0; i < qtFuncionarios; i++) {
    printf("Entre com a matrícula do funcionário: ");
    scanf("%d", &matricula);

    printf("Entre com seu salário: ");
    scanf("%f", &salario);

    if (salario > *maiorSalarioDep) {
      *maiorSalarioDep = salario;
      (*qtMaiorSalario) = 1;
    } else if (salario == *maiorSalarioDep)
      (*qtMaiorSalario)++;
  }
}

int main() {

  int codigoDep, qtFuncionarios, qtMaiorSalario;
  float maiorSalarioDep;

  printf("Entre com o código do departamento: ");
  scanf("%d", &codigoDep);

  while (codigoDep != 0) {

    qtMaiorSalario = 0;
    maiorSalarioDep = -1;

    printf("Entre com a quantidade de funcionários: ");
    scanf("%d", &qtFuncionarios);

    umDepartamento(qtFuncionarios, &maiorSalarioDep, &qtMaiorSalario);

    printf("Maior salário do departamento: %.2f\n", maiorSalarioDep);
    printf("Quantidade de funcionários com o maior salário: %d\n",
           qtMaiorSalario);

    printf("Entre com o código do departamento: ");
    scanf("%d", &codigoDep);
  }
  return 0;
}
