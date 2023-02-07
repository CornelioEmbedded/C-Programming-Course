/*
Ingresar por teclado el nombre y el signo de cualquier persona e imprima
El nombre solo si la persona es signo aries, en caso contrario imprima no es signo aries
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char nombre[20], signo[20];
	
	printf("Digite su nombre: ");
	fgets(nombre,20,stdin);
	strtok(nombre,"\n");        //ELiminar espacio enter en el string
	
	printf("Digite su signo: ");
	fgets(signo,20,stdin);
	strtok(signo,"\n");         //Eliminar espacio enter en el string
	
	if (strcmp(signo, "aries") == 0 || strcmp(signo, "Aries") == 0 || strcmp(signo, "ARIES") == 0)
	{
		printf("Es signo aries");
	}else
	{
		printf("No es signo aries");
	}
	
	return 0;
}
