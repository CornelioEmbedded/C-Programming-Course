#include <stdio.h>
#include <stdlib.h>

struct hola{
	
	int edad;
	char nombre[30];
	int opcion;
} 

hola1, hola2;


int main()
{
	printf("Digite su nombre: ");
	gets(hola1.nombre);
	
	printf("Digite su edad: ");
	scanf("%i", &hola1.edad);
	
	printf("Digite su numero favorito: ");
	scanf("%i", &hola1.opcion);
	
	return 0;
}
