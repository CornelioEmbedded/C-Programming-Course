/*
Numero factorial con recursivdad
*/

#include <stdio.h>

int factorial(int);

int main()
{
	int n;
	printf("Digite un numero: ");
	scanf("%i", &n);
	
	printf("%i",factorial(n));
	
	return 0;
}

int factorial(int numero)
{
	int resultado;
	
	if(numero <= 1 )
	{
		return 1;
	}else
	{
		resultado =factorial(numero-1)*numero;
		return resultado;
	}
}
