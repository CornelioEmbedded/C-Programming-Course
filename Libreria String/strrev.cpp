/*
strrev(Cadena)
*/

#include <stdio.h>
#include <string.h>

int main()
{
	
	char cadena[100];
	
	printf("Escriba lo que sea: ");
	fflush(stdin);
	gets(cadena);
		
	printf("Cadena invertida: %s", strrev(cadena));
	
	return 0;
}
