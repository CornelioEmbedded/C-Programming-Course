/*
Decirle al alumno algo con base en sus calificaciones
9 a 10 - Excelente!
8 a 9 - Muy bien!
7 a 8 - Pasaste!
0 a 6 -  Reprobado :(
*/

#include <stdio.h>

int main()
{
	int calif;
	
	printf("Digite su calificacion entre 0 y 10: ");
	scanf("%i", &calif);
	
	switch(calif)
	{
		case 10: 
		printf("Excelente!");
		break;
		
		case 9:
		printf("Excelente!");
		break;
		
		case 8:
		printf("Muy bien!");
		break;
		
		case 7:
		printf("Pasaste!");
		break;
		
		case 6:
		printf("Reprobaste!");
		break;
		
		case 5:
		printf("Reprobaste!");
		break;
		
		case 4:
		printf("Reprobaste!");
		break;
		
		case 3:
		printf("Reprobaste!");
		break;
		
		case 2:
		printf("Reprobaste!");
		break;
		
		case 1:
		printf("Reprobaste!");
		break;
		
		case 0:
		printf("Reprobaste!");
		break;
		
	}
	
	return 0;
}
