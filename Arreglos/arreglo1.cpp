#include <stdio.h>

int main()
{
	int arreglo[4] = {24,3,5,90};
	
	printf("Primer valor del arrglo: %i\n", arreglo[0]);
	printf("Segundo del arrglo: %i\n", arreglo[1]);
	printf("Tercer del arrglo: %i\n", arreglo[2]);
	printf("Cuarto del arrglo: %i\n", arreglo[3]);
	
	arreglo[0] = {3};
	
	printf("el nuevo valor del arreglo es: %i", arreglo[0]);
	
	return 0;
}
