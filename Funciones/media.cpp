/*
Media aritmetica
*/

#include <stdio.h>

void media(int, int);

int n1, n2;
float media1;

int main()
{
	
	printf("Digite un numero: ");
	scanf("%i", &n1);
	printf("Digite otro numero: ");
	scanf("%i", &n2);
	
	media(n1,n2);
	
	return 0;
}

/*********************************************FUNCIONES********************************************/

void media(int n1, int n2)
{
	
	media1 = (n1 + n2) * 0.5;
	
	printf("La media de estos numeros es: %0.2f", media1);

	
}

