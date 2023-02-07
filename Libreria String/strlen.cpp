/*
strlen(Cadena)
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char hola[200];
	printf("Escribe lo que sea: ");
	fflush(stdin);
	scanf("%s", &hola);
	
	printf("La longuitud de la cadena digita es de %i", strlen(hola));
}
