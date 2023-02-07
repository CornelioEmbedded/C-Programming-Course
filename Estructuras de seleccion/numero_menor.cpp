/*
Calcular el menor de dos numeros
*/

#include <stdio.h>

int main()
{
	int numero1, numero2;
	
	printf("Digite un numero: ");
	scanf("%i", &numero1);
	printf("Digite un segundo numero: ");
	scanf("%i", &numero2);
	
	if(numero1 < numero2)
	{
		printf("El numero mas pequeno es: %i", numero1);
	}else if(numero1 == numero2)
	{
		printf("Son el mismo numero");
	}else
	{
		printf("El numero mas pequeno es %i", numero2);
	}
	
	return 0;
}
