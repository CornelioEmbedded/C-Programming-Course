/*
Hacer un programa que borre la pantalla al pulsar 1
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero;
	
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	if(numero == 1)
	{
		system("cls");                   //BORRAR PANTALLA CON LIBRERIA STDLIB (Standard Librery)
		printf("Si se borro la pantalla");
	}else
	{
		printf("No se borro la pantalla");
	}
	
	
	return 0;
}
