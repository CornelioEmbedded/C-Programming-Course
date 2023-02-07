/*
Promedio con arreglos
*/

#include <stdio.h>

int main()
{
	int valores[8], suma = 0;
	float promedio;
	
	for(int i = 0; i< 8; i++)
	{
		printf("Digite calificacion %i: ", i);
		scanf("%i", &valores[i]);
		
		suma = suma + valores[i];
	}
	
	promedio = suma/8;
	
	printf("El promedio de los valores es: %0.2f", promedio);
	
	
	
	return 0;
}
