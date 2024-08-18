#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int gc;
	float gf;
	printf("QUESTAO 2\n");
	printf("digite a temperatura em graus celsius: ");
	scanf("%d", &gc);
	gf=gc*1.8+32;	
	printf("a temperatura em fahrenheit e: %.1f", gf);
	return 0;
}
