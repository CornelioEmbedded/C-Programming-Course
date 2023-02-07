/*
Hacer una estructura llamada corredor, en la cual se tendran los siguientes miembros:
Nombre, edad, sexo, club, pedir datos al usuario para un corredor y asignarlo una 
categoria de competicion:
Juvenil <= 18 años
Senior <= 40 años
Veterano > 40 años
Posteriormente imprimir todos los datos del corredor incluida su categoria de competicion
*/

#include <stdio.h>
#include <string.h>

struct corredor
{
	char nombre[30];
	int edad;
	char sexo[30];
	char club[30];
	char categoria[30];
	
}corredor1[100];

int main()
{
	int cantidad;
	
	printf("Digite el numero de corredores que hay: ");
	scanf("%i", &cantidad);
	
	for(int i = 0; i < cantidad; i++)
	{
		printf("\nNombre del corredor %i: ",i+1);
		scanf("%s", &corredor1[i].nombre);
		printf("Edad del corredor %i: ",i+1);
		scanf("%i", &corredor1[i].edad);
		printf("Sexo del corredor %i: ",i+1);
		scanf("%s", &corredor1[i].sexo);
		printf("Club del corredor %i: ",i+1);
		scanf("%s", &corredor1[i].club);
	}
	
	for(int i = 0; i<cantidad; i++)
	{
		
		if(corredor1[i].edad <= 18)
		{
			strcpy(corredor1[i].categoria, "Juvenil");
			
		}else if(corredor1[i].edad >18 && corredor1[i].edad <= 40)
		{
			strcpy(corredor1[i].categoria, "Senior");
		}else
		{
			strcpy(corredor1[i].categoria, "Veterano");
		}
		
	}
	
	for(int i = 0; i < cantidad; i++)
	{
		printf("\nCorredor %i", i+1);
		printf("\nNombre: %s\nEdad: %i\nSexo: %s\nClub: %s\n", corredor1[i].nombre,corredor1[i].edad,corredor1[i].sexo,corredor1[i].club);
		printf("Pertenece a la categoria: %s\n", corredor1[i].categoria);
	}
	
	
	return 0;
}
