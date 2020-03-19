#include <stdio.h>
#include <stdlib.h>

// Este programa é um exemplo básico para as aplicações de controle de versionamento GIT

int main(){

	int a = 3;
	int b = 4;

	printf("Digite um número inteiro: ");
	scanf("%d", &a);
	printf("Digite outro número inteiro: ");
	scanf("%d", &b);

	int resposta_a = soma(a,b);
	int resposta_b = mult(a,b);

	printf("A soma e': %d\n",resposta_a);
	printf("A multiplicacao e': %d\n",resposta_b);

	return 0;
}

