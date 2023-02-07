/*
Escrbrir los multiplos de 1 hasta cualquier numero de cualquier numero
*/

#include <stdio.h>

int main()
{
	int numero, multiplo, res;
	
	printf("Hasta que numero quiere los multiplos: ");
	scanf("%i", &numero);
	printf("Numero para multiplo: ");
	scanf("%i", &multiplo);
	
	for(int i = 1; i <= numero; i++)
	{
		
		if( i % multiplo == 0)
		{
			printf("%i ", i);
		}

	}
	
	return 0;
}
