/*
strcpy(Destino, Fuente)
*/

#include <stdio.h>
#include <string.h>

int main()
{
	
	char origen[] = "programacion";
	char hola[12];
	
	strcpy (hola, origen);
	printf("%s", hola);
	
	return 0;
}
