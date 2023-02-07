/*
Sumar un numero y restar el siguiente 1-2+3-4+5-6+7
Impares = positivos
Pares = negativos
*/

#include <stdio.h>

int main()
{
	int numero, neg, sumaN=0, sumaM=0, suma;
	
	printf("Digite un numero limite: ");
	scanf("%i", &numero);
	
	for(int i=1 ; i <= numero; i++)
	{
		if(i % 2 == 0)
		{
			neg = i * -1;
			sumaN = sumaN + neg;
		
		}else
		{
			sumaM = sumaM + i;
		}
		
	}
	
	suma = sumaM + sumaN;
	
	printf("La suma es: %i", suma);
	
	return 0;
}
