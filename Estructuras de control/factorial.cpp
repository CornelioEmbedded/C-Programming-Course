/*
Determinar el factorial de un numero
*/

#include <stdio.h>

int main()
{
	int numero, factorial = 1 ;
	
	printf("Digite el numero: ");
	scanf("%i", &numero);
	
	for(int i = 1; i<= numero; i++)
	{
		factorial = factorial * i;
	}
	
	printf("El factorial es: %i", factorial);
	return 0;
}
