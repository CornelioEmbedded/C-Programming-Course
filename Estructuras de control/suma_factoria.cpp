/*
Suma de factoriales
*/

#include <stdio.h>

int main()
{
	int numero, fact = 1, suma = 0;;
	
	printf("Digite que numero: ");
	scanf("%i", &numero);
	
	for(int i = 1; i<= numero; i++)
	{
		fact = fact * i;
		suma = suma + fact;
	}
	
	printf("La suma de los factores es de: %i", suma);
	
	return 0;
}
