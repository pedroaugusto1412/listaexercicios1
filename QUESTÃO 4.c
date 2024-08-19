#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int peso;
	int valorm;
	int ex;
		printf("QUESTAO 4\n");
	printf("digite o peso do peixe: ");
	scanf("%d", &peso);
	ex=peso-50;
	valorm=ex*4;
	printf("o valor da multa e de: %d",valorm);
	return 0;
}
