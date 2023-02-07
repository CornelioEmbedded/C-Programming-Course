/*
Numeros enteros a binario
*/

#include <stdio.h>

int binario(int);

int main()
{
	int numero,n,a, cont = 1;
	
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	if(numero > 0)
	{
		binario(numero);
	}else
	{
		printf("No ha digitado un numero");
	}
	return 0;
}


/*************************************FUNCIONES****************************************/

int binario(int numero)
{
	if(numero > 1) binario(numero/2);
	printf("%i", numero%2);
}
