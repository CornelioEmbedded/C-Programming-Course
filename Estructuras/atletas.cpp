/*
Hacer un arreglo de estructura llamada atleta para N atletas
que contenga los siguientes miembros: nombre, pais, numero de medallas
y devuelva los datos(nombre,pais) del atleta que ha ganando el mayor 
numero de medallas
*/

#include <stdio.h>

struct atleta
{
	char nombre[30];
	char pais[30];
	int medallas;
	
}atletas[100];

int main()
{
	int cantidad, numero = 0,posicion;
	
	printf("Cuantos atletas hay?: ");
	scanf("%i", &cantidad);
	
	for(int i =0;i<cantidad;i++)
	{
		printf("\nNombre del atleta %i: ",i+1);
		scanf("%s", &atletas[i].nombre);
		printf("Pais %i: ",i+1);
		scanf("%s", &atletas[i].pais);
		printf("Medallas ganadas %i: ",i+1);
		scanf("%i", &atletas[i].medallas);

	}
	
	for(int i=0 ; i < cantidad; i++)
	{
		if(atletas[i].medallas > numero)
		{
			numero = atletas[i].medallas;
			posicion = i;
		}
	}
	
	printf("\nAtleta con mas medallas ganadas: \n");
	printf("Nombre: %s\nPais: %s\n", atletas[posicion].nombre, atletas[posicion].pais);
	
	return 0;
}
