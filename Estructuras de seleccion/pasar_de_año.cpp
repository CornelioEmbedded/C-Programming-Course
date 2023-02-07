/*
Ver si un alumno va a pasar de año o no, un alumno
solo tiene derecho a reprobar 3 materias para poder pasar de año 
si reprueba 4 materias no puede pasar de año y recursa
*/

#include <stdio.h>

int main()
{
	int materias_aprob;
	
	printf("Cuantas materias reprobo?: ");
	scanf("%i",&materias_aprob);
	
	if(materias_aprob <= 3)
	{
		printf("Pasa de curso!");
	}else
	{
		printf("No paso el curso :(");
	}
	
	
	return 0;
}
