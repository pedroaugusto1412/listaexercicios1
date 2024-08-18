#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float valorC;
	float imp28;
	float valorT;
	float imp45;
	printf("QUESTAO 5\n");
	printf("digite o valor de fabrica do carro: ");
	scanf("%f", &valorC);
	imp28= 0.28*valorC;
	imp45= 0.45*valorC;
	valorT=imp28+imp45+valorC;
	printf("o valor pago apos somar todas as taxas e de: %f", valorT);
	return 0;
}
