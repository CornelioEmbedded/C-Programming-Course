/*
Copiar contenido de un array a otro
*/

#include <stdio.h>

int main()
{
	int arreglo1[5] = {1,2,3,4,5};
	int arreglo2[5];
	
	for(int i = 0; i< 5; i++)
	{
		arreglo2[i] = arreglo1[i];
		
	}
	
	printf("\nNuevo arreglo\n");
	
	for(int i = 0; i< 5; i++)
	{
		printf("Elemento[%i]: %i\n", i,arreglo2[i]);
		
	}
	
	
	return 0;
}
