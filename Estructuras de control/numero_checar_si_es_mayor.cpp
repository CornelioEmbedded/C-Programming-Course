/*
Digite un numero, si el numero supera a 10 multiplique los 10 primeros numero,
sino sumelos
*/

#include <stdio.h>

int main()
{
	int numero, mult = 1, sum = 0;
	
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	if(numero > 10)
	{
		for(int i = 1; i<= 10; i++)
		{
			mult = mult * i;
		}
		
		printf("%i", mult);
	}else
	{
		for(int i = 1; i<= 10; i++)
		{
			sum = sum + i;
		}
		
		printf("%i", sum);
	}
	
	return 0;
}
