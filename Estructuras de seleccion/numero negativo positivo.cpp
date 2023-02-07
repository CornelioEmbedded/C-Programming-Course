/*
Comprobar si un numero digitado por el usuario es positivo o negativo
*/

#include <stdio.h>

int main()
{
	int numero;
	
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	if(numero > 0)
	{
		printf("El numero es positivo");
	}else if(numero == 0)
	{
		printf("El numero es 0");
	}else
	{
		printf("El numero es negativo");
	}
	
	return 0;
}
