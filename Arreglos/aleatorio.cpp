/*
Crear un programa que tenga un array de 100 numeros aleatorios entre 1 y 1000.
Una vez creado organizarlo de tal manera que almacene los numeros pares en un
array y los impares en otro
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cont=0, cont2=0;
	int arreglo[100], pares[100], impares[100];
	
	for(int i = 0; i<100; i++)
	{
		arreglo[i] = rand() % +1001;
		
		pares[i] = 0;
		impares[i] = 0;
		
		if(arreglo[i] % 2 == 0)
		{
			pares[i] = arreglo[i];
			cont++;
		}else
		{
			impares[i] = arreglo[i];
			cont2++;
		}
		
		printf("Elemento[%i]: %i\n", i, arreglo[i]);
	}
	
	
	printf("\nArreglo de numero pares\n");
	for(int i = 0; i < cont; i++)
	{
		printf("Elemento[%i]: %i\n", i, pares[i]);
	}
	
	printf("\nArreglo de numero impares\n");
		for(int i = 0; i < cont2; i++)
	{
		printf("Elemento[%i]: %i\n", i, impares[i]);
	}
	
	
	return 0;
}
