#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int tempo;
	int velocidade;
	int qui;
	printf("QUESTAO 6\n");
	printf("digite a digite as horas gastas na viagem: \n");
	scanf("%d", &tempo);
	printf("digite a velocidade: \n");
	scanf("%d", &velocidade);
	qui=(tempo*velocidade)/12;
	printf("total de combustivel gasto foi de: %d",qui);
	return 0;
}
