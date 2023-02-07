/*
Escribe un programa en el cual se solicite al usuario llenar un arreglo de 10 elementos
(unicamente 1 y 0). Una vez que el usuario llene el arreglo con el numero binario, podra
seleccionar entre alguna codificacion

a)Binario puro
b)Punto fijo
c)Complemento a 2

El programa realizara la conversion y como salida mostrara el resultado en representacion decimal
*/

#include <stdio.h>

int main()
{
	int arreglo[10], opcion;
	
	for(int i = 0; i<10; i++)
	{
		printf("Elemento[%i]: ",i);
		scanf("%i", &arreglo[i]);
	}
	
	printf("\nEl arreglo es:\n");
	
	for(int i = 0; i<10; i++)
	{
		printf("Elemento[%i]: %i\n",i, arreglo[i]);
	}
	
	printf("\n1) Binario puro\n");
	printf("2) Punto fijo\n");
	printf("3) Complemento a 2\n");
	printf("Seleccione una opcion: ");
	scanf("%i", &opcion);
	
}
