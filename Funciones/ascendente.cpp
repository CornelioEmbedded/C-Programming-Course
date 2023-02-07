/*
Ordenar 3 numeros de forma ascendente
*/

#include <stdio.h>

void ascender(int, int, int);

int a, b, c;
	
int main()
{

	printf("Digite un numero: ");
	scanf("%i", &a);
	printf("Digite otro numero: ");
	scanf("%i", &b);
	printf("Digite un tercer numero: ");
	scanf("%i", &c);
	
	ascender(a, b, c);
	
	return 0;
}

/******************************************FUNCIONES*********************************************/

void ascender(int a, int b, int c)
{
	
	if( a < b && a < c) //A MAYOR B Y C
	{
		if( b < c)
		{
			printf(" %i %i %i", a,b,c);
		}else
		{
			printf(" %i %i %i", a,c,b);
		}
	}else if( b < a && b < c)
	{
		if( a < c)
		{
			printf(" %i %i %i", b,a,c);
		}else
		{
			printf(" %i %i %i", b,c,a);
		}
	}else if( c < a && c < b)
	{
		if( a < b)
		{
			printf(" %i %i %i", c,a,b);
		}else
		{
			printf(" %i %i %i", c,b,a);
		}
	}
	
}
