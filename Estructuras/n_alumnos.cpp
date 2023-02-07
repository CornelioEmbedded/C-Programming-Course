/*
Pedir los datos para N alumnos, y calcular cual de todos tiene
el mejor promedio, e imprimir sus datos
*/

#include <stdio.h>

struct alumno
{
	char nombre[30];
	int edad;
	int matricula;
	float promedio;
	
} alumnos[100];

int main()
{
	int cantidad, lugar;
	float promedio = 0.0;
	
	printf("Cuantos alumnos quiere evaluar?: ");
	scanf("%i", &cantidad);
	
	for(int i =0;i<cantidad;i++)
	{
		printf("\nNombre del alumno %i: ",i+1);
		scanf("%s", &alumnos[i].nombre);
		printf("Edad del alumno %i: ",i+1);
		scanf("%i", &alumnos[i].edad);
		printf("Matricula del alumno %i: ",i+1);
		scanf("%i", &alumnos[i].matricula);
		printf("Promedio del alumno %i: ",i+1);
		scanf("%f", &alumnos[i].promedio);
	}
	
	for(int i = 0; i<cantidad; i++)
	{
		if(alumnos[i].promedio > promedio)
		{
			promedio = alumnos[i].promedio;
			lugar = i;
		}
	}
	
	printf("\nEl alumno con el mejor promedio es:\n");
	printf("Nombre: %s\nEdad: %i\nMatricula: %i\nPromedio: %0.2f",alumnos[lugar].nombre,alumnos[lugar].edad,alumnos[lugar].matricula,alumnos[lugar].promedio);

	
	return 0;
}
