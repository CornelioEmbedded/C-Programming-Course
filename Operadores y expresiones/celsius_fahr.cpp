/*
Convertir grados celsius a fahrenheit
*/

#include <stdio.h>

int main()
{
	float celcius, fahr;
	
	printf("Temperatura en celcius: ");
	scanf("%f",&celcius);
	
	fahr = (celcius * 1.8) + 32;
	
	printf("Temperatura en Fahrenheit: %0.2f",fahr);
	
	return 0;
}
