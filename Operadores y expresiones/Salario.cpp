/*
Dadas las horas trabajadas de una persona y el valor por hora.
Calcular su salario e imprimirlo
*/

#include <stdio.h>

int main()
{
	int horas_trabajo;
	float pago_hora, salario;
	
	printf("Digite horas trabajadas: ");
	scanf("%i",&horas_trabajo);
	
	printf("Cuanto le pagan por hora?: ");
	scanf("%f",&pago_hora);
	
	salario = horas_trabajo * pago_hora;
	
	printf("\nSu salario es de: %0.2f",salario);
	
	return 0;
}
