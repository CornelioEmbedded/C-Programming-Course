/*
Hacer un programa que calcule longuitudes de circunferencia
*/

#include <stdio.h>

int main()
{
	float radio, circunf;
	float pi = 3.1415;
	
	printf("Digite radio de circunferencia: ");
	scanf("%f",&radio);
	
	circunf = radio*pi*2;
	
	printf("Longuitud de circunferencia: %0.2f",circunf);
	
	return 0;
}
