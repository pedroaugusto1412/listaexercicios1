#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main ()

{
    int n1; 
	int n2; 
	int area;
	int area2;
	printf("QUESTAO 1\n");
    printf("insira a altura: ");
    scanf("%d", &n1);
    printf("insira a largura: ");
    scanf("%d", &n2);
    area= n1*n2;
    area2= area*2;
    printf("o area do quadrado e de: %d", area2 );
 return 0; 
}

