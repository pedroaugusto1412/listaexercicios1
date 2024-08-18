#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n1;
	int n2;
	int d;
	float t5;
	float r;
	int soma;
	printf("QUESTAO 3\n");
	printf("digite o primeiro numero que nao seja zero: ");
	scanf("%d", &n1);
	if (n1==0){ 
	printf("o numero nao pode ser 0");
	return 0; 
	};
	printf("digite o segundo numero que nao seja zero: ");
	scanf("%d", &n2);
	if (n2==0){ 
	printf("o numero nao pode ser 0");
	return 0; 
	};
	
	d=n1*2;
	printf("o dobro do primeiro numero e: %d ", d);
	t5=n1*3+n2/2;
	printf("\na soma do triplo do primeiro numero com a metade do segundo numero e: %.0f", t5);
	soma=n1+n2;
	r=sqrt(soma);
	printf("\na raiz quadrada da soma do primeiro com o segundo numero e: %.1f", r);
	return 0;
}
