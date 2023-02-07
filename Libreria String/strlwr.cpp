/*
strlwr(Cadena)
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char hola[100];
	
	printf("Escribe lo que sea en mayusculas: ");
	fflush(stdin);
	gets(hola);
	
	printf("El nuevo texto es: %s", strlwr(hola));
	return 0;
	
}
