/*
Suma de 20 numeros pares 20
*/

#include <stdio.h>

int main()
{
	int i = 0, suma = 0, cont = 0;
	do
	{
		if( i % 2 == 0) //Si el numero es par
		{
			suma = suma + i;
			cont++;
			printf("La suma va es %i\n", suma);
		}
		
		i++;
		
	}while (cont <= 20);
	
	printf("%i\n", suma);

	return 0;
}
