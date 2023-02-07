/*
Comprobar a traves de un programa si un alumno aprobo o no un examen
*/

#include <stdio.h>

int main()
{
	int calif;
	
	printf("Digite calificacion de examen: ");
	scanf("%i", &calif);
	
	if(calif >= 7)
	{
		printf("Aprobo el curso!");
	}else
	{
		printf("Reprobo el curso :(");
	}
	
	return 0;
}
