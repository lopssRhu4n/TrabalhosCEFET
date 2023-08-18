#include <stdio.h>

static int contagem = 1;
int main() {

  printf("%d\n", contagem);
  contagem++;

  if (contagem == 100)
    return 0;

  return main();
}
