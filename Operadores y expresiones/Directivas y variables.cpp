//Directivas de preprocesador y variables

#include <stdio.h>
#define pi 3.1416

int y = 5; //Variable global

int main()
{
	int x = 10; //Variable local
	float suma = 0;
	
	suma = pi + x;
	
	printf("La suma es: %.2f",suma);
	
	return 0;
}


