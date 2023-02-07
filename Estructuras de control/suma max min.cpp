/*
Suma numeros pares desde un minimo a un maximo
*/

#include <stdio.h>

int main()
{
	int maximo, minimo, suma = 0, suma1 = 0;
	
	printf("Digite un maximo: ");
	scanf("%i", &maximo);
	printf("Digite un minimo: ");
	scanf("%i", &minimo);
	
	if(minimo > maximo)
	{
		printf("No puede ser posible la operacion");
	}else
	{

	for(int i = minimo; i<= maximo; i++)
	{
		
		if(i % 2 == 0)
		{
			suma = suma + i;
		}else
		{
			suma1 = suma1 + i;
		}

	}
	
	printf("La suma de pares es de %i\n", suma);
	printf("La suma de impares es de %i\n", suma1);
	}
	return 0;
}
