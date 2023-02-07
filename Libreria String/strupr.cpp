/*
strupr(Cadena)
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char hola[100];
	
	printf("Escribe lo que sea en minusculas: ");
	fflush(stdin);
	gets(hola);
	
	printf("El nuevo texto es: %s", strupr(hola));
	return 0;
	
}
