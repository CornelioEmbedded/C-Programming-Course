/*
copiar arrego de caracteres
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char nombre1[15], nombre2[15];
	
	printf("Escribe algo: ");
	gets(nombre1);
	
	strcpy(nombre2, nombre1);
	printf("En arreglo2 esta escrito: %s", nombre2);
	
	return 0;
}
