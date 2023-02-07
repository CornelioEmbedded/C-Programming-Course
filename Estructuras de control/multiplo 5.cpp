/*
Poner todos los multiplos de 5 a 1 hasta n
*/

#include <stdio.h>

int main()
{
	int numero;
	
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	for( int i = 0; i <= numero; i++)
	{
		if(i % 5 == 0)
		{
			printf("El numero: %i es multiplo de 5\n",i);
		}
	}
	
	return 0;
}
