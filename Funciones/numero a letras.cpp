/*
Convertir numero 1 al 10 en letras 1- uno
*/

#include <stdio.h>

void letras(int);
int numero;

int main()
{
	printf("Escriba un numero entre 1 y 10: ");
	scanf("%i", &numero);
	
	if(numero > 10 || numero < 0)
	{
		printf("Este numero esta fuera del rango solicitado");
	}else
	{
		letras(numero);
	}
	
	return 0;
}

/*****************************************FUNCIONES**********************************************/

void letras(int numero)
{
	switch(numero)
	{
		case 1: printf("UNO"); break;
		case 2: printf("DOS"); break;
		case 3: printf("TRES"); break;
		case 4: printf("CUATRO"); break;
		case 5: printf("CINCO"); break;
		case 6: printf("SEIS"); break;
		case 7: printf("SIETE"); break;
		case 8: printf("OCHO"); break;
		case 9: printf("NUEVE"); break;
		case 10: printf("DIEZ"); break;
		
	}
	
}
