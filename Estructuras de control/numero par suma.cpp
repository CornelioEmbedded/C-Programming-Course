/*
Hacer yn programa que imprima la suma de todos los numeros
pares que hay desde 1 hasta n, y diga cuantos numeros hay
*/

#include <stdio.h>

int main()
{
	int numero, suma, cont = 0;
	
	printf("Digite hasta que numero quiere sumar: ");
	scanf("%i", &numero);
	
	for(int i = 1; i <= numero; i++)
	{
		
		if(i % 2 == 0)
		{
			suma = suma + i;
			cont++;
		}
		
	}
	
	printf("La suma de los numeros pares es: %i\n", suma);
	printf("La cantidad de numeros es: %i\n", cont);
	
	return 0;
}
