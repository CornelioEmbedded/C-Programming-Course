#include <stdio.h>

int main()
{
	char calif;
	
	printf("Digite su calificacion: ");
	scanf("%c", &calif);
	
	if (calif == 'A' || calif == 'a')
	{
		printf("Excelente");
	}else if(calif == 'B'|| calif == 'b')
	{
		printf("Notable");
	}else if(calif == 'C'|| calif == 'c')
	{
		printf("Aprobado");
	}else if(calif == 'D' || calif == 'F'|| calif == 'd'|| calif == 'f')
	{
		printf("Reprobado");
	}else
	{
		printf("Niño prodigio");
	}
	
	
	return 0;
}
