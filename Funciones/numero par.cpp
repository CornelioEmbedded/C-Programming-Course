/*
Numero par con funciones
*/

#include <stdio.h>

int n1;

void par(int);

int main()
{
	
	printf("Digite un numero: ");
	scanf("%i", &n1);
	
	par(n1);
	
	return 0;

}

/**************************************FUNCIONES**************************************/

void par(int n1)
{
	if(n1 % 2 == 0)
	{
		printf("Este numero es par");
	}else
	{
		printf("Este numero es impar");
	}
}
