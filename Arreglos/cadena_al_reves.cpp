/*
Realice un programa que permita leer una cadena de caracteres y que 
devuelva el numero de caracteres que tiene dicha cadena e imprimir
dicha cadena al reves
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char cadena[30];
	int i = 0;
	
	printf("Escribe lo que sea: ");
	fgets(cadena,30,stdin);
	strtok(cadena, "\n");
	
	while(cadena[i] != '\0')
	{
		i++;
	}
	
	printf("La palabra tiene %i caracteres\n",i);
	
	while(i >= 0)
	{
		printf("%c", cadena[i]);
		i--;
	}
	
	return 0;
}
