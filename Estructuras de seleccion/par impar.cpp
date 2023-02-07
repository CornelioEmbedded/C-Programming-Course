/*
Determinar si un numero es par o impar
*/

#include <stdio.h>

int main()
{
	int numero;
	
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	if(numero %2 == 0)
	{
		printf("EL numero es par");
	}else
	{
		printf("El numero es impar");
	}
	
	return 0;
}
