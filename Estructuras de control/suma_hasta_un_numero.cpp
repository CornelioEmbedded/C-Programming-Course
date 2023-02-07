/*
Determinar suma de todos los numeros hasta el numero que de el usuario
*/

#include <stdio.h>

int main()
{
	int numero, suma;
	
	printf("Digite un numero: ");
	scanf("%i",&numero);
	
	for(int i = 0; i <= numero; i++)
	{
		suma = suma + i;
	}
	
	printf("La suma es %i", suma);
	
	return 0;
}
