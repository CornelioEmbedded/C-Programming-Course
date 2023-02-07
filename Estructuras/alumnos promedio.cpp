/*
Hacer una estructura llamada alumno, en la cual se tendran los siguientes miembros:
NOmbre, edad, promedio, datos al usuario para 3 alumnos, comprobar cual de los 3 
tiene el mejor prmedio y posteriormente imprimir los datos del alumno
*/

#include <stdio.h>

struct alumno
{
	char nombre[30];
	int edad;
	float promedio;
	
}alumnos[3];

int main()
{
	float mejorCalif = 0.0;
	int posicion;
	
	printf("Digite los datos de los 3 alumnos:\n");
	
	for(int i = 0; i< 3; i++)
	{
		printf("\nNombre del alumno %i: ",i+1);
		scanf("%s", &alumnos[i].nombre);
		printf("Edad del alumno %i: ",i+1);
		scanf("%i", &alumnos[i].edad);
		printf("Promedio del alumno %i: ",i+1);
		scanf("%f", &alumnos[i].promedio);
		
	}
	
	for(int i=0; i<3;i++)
	{
		if(alumnos[i].promedio > mejorCalif)
		{
			mejorCalif = alumnos[i].promedio;
			posicion = i;
		}
	}
	
	printf("\nEl alumno con el mejor promedio es:\n");
	printf("Nombre: %s\nEdad: %i\nPromedio: %0.2f",alumnos[posicion].nombre,alumnos[posicion].edad,alumnos[posicion].promedio);


	
	return 0;
}
