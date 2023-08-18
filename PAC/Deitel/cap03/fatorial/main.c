#include <stdio.h>
#include <math.h>


int calculaFatorial(int num) {
	int agregado = 1, cont = 1;

	if(num == 1) return 1;

	while(cont <= num){
		agregado *= cont;
		cont++;
	}
	

	return agregado;
}

float calculaE(){
	float e = 1, cont = 0;
	while(cont <= 10){
		e += 1/((float) calculaFatorial(cont));
		cont ++;
	}

	return e;

}

float calculaEPotenciacao(int x){
	float e, resultado,floatx = (float) x, expoente;
	e = calculaE();

	expoente = 1 + (floatx/1) + (floatx*floatx/4) + (floatx*floatx*floatx/6);
	return pow(e, expoente);


}

int main(){
	int num = -1, fatorial;
	
	while(num < 0){
		printf("Entre com o número do fatorial: ");
		scanf("%d", &num);
	}
	
	fatorial = calculaFatorial(num);

	printf("O valor do fatorial de %d é: %d\n", num, fatorial);
	printf("O valor de E é: %.4f\n", calculaE());

	printf ("O valor de E³ é: %.4f\n", calculaEPotenciacao(3));

	

	return 0;

}
