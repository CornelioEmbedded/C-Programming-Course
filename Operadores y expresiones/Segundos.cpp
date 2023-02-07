/*
Calcular la cantidad de segundos que estan incluidos en el numero de horas,
minutos y segundos ingresados por el usuario
*/

#include <stdio.h>

int main()
{
	int horas, minutos, segundos;
	float horas_seg, min_seg, total;
	
	printf("Digite numero de horas: ");
	scanf("%i",&horas);
	printf("Digite numero de minutos: ");
	scanf("%i",&minutos);
	printf("Digite numero de segundos: ");
	scanf("%i",&segundos);
	
	horas_seg = horas * 3600;
	min_seg = minutos * 60;
	
	total = horas_seg + min_seg + segundos;
	
	printf("Numero total de segundos: %0.2f",total);
	return 0;
}
