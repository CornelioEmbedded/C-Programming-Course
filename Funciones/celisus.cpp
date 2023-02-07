/*
Digitar grados en celsius e imprimir los grados en fahrenheit y en kelvin
*/

#include <stdio.h>

int celsius, opcion;

void farh(int);
void kelvin(int);

int main()
{
	printf("Digite temperatura en celsius: \n");
	scanf("%i", &celsius);
	printf("\nA que temperatura quiere convertir: \n");
	printf("1) Fahrnheit\n");
	printf("2) Kelvin\n");
	printf("Seleccione opcion: ");
	scanf("%i", &opcion);
	
	if( opcion > 2)
	{
		printf("No existe esta opcion");
	}else
	{
		switch(opcion)
		{
			case 1: farh(celsius); break;
			case 2: kelvin(celsius); break;
		}
	}
	
	return 0;
}

/****************************************FUNCIONES***********************************************/

void farh(int celsius)
{
	float fahr;
	
	fahr = (1.8 * celsius) + 32;
	printf("Temperatura en Fahrenheit: %0.2f F", fahr);
}

void kelvin(int celsius)
{
	float kel;
	
	kel = 273.15 + celsius;
	printf("Temperatura en Kelvin: %0.2f K", kel);
}
