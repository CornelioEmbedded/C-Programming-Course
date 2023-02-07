/*
Hcer 2 arrays de cadenas de caracteres, almacenar 2 nombres cada uno dentro de su 
respectiva variable, y luego intercambiar el contenido de los arrays
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char cadena[30], cadena2[30], cadena3[30];
	
	printf("Digite primer nombre: ");
	fflush(stdin);
	gets(cadena);
	
	printf("Digite segundo nombre: ");
	fflush(stdin);
	gets(cadena2);
	
	strcpy(cadena3, cadena);
	strcpy(cadena, cadena2);
	strcpy(cadena2,cadena3);
	
	printf("\nAhora el primer nombre es: %s\n",cadena);
	printf("Ahora el segundo nombre es: %s\n",cadena2);
	
	return 0;
}
