/*
Un alumno desea saber cual sera su calificación final en
la materia de algortimos.
Dicha calificación se compone de los siguientes porcentajes:

55% del promedio de sus tres calificaciones parciales
30% de la calificación del examen final
15% de la calificación de un trabajo final
*/

#include <stdio.h>

int main()
{
	int examen1, examen2, examen3, examen_final, proyecto_final;
	float calif;
	
	printf("Calificacion primer examen: ");
	scanf("%i",&examen1);
	printf("Calificacion segundo examen: ");
	scanf("%i",&examen2);
	printf("Calificacion tercero examen: ");
	scanf("%i",&examen3);
	printf("Calificacion examen final: ");
	scanf("%i",&examen_final);
	printf("Calificacion proyecto final: ");
	scanf("%i",&proyecto_final);
	
	calif = (examen1 * 0.1833)+(examen2 * 0.1833)+(examen3 * 0.1833)+(examen_final*0.3)+(proyecto_final*0.15);
	
	printf("\nCalificación final: %f",calif);
	
	return 0;
}
