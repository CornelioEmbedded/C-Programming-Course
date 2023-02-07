/*
Hacer un programa que muestre una tabla de multiplicar
hasta el 20 de un numero cualquiera por pantalla, el numero
se pide en la funcion principal. Usar procedimientos
*/

#include <stdio.h>

int numero;

void tabla(int);

int main()
{
	
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	tabla(numero);
	
	return 0;
}

/***************************************FUNCIONES********************************************/

void tabla(int numero)
{
	int mult;
	
	for(int i = 0; i <= 20; i++)
	{
		mult = i * numero;
		printf(" %i x %i = %i\n", numero,i,mult);
	}
	
}
