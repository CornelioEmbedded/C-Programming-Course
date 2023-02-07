/*
Determinar si un numero es primo
*/

#include <stdio.h>

int main()
{
	int numero, contador = 0;
	
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	for ( int i = 1; i <= numero; i++)
	{
		if(numero % i == 0)
		{
			contador = contador +1;
		}
		
	}

		if(contador > 2)
	{
		printf("Este numero no es primo");
	}else
	{
		printf("Este numero es primo");
	}
		
	return 0;
}
