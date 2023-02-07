/*
Calcular el nuevo salario de un obrero si obtuvo un incremento del
25% sore su salario anterior
*/

#include <stdio.h>

int main()
{
	float salario, salario_final;
	
	printf("Salario actual: ");
	scanf("%f",&salario);
	
	salario_final = salario + (salario*0.25);
	
	printf("Salario final: %0.2f",salario_final);
	
	
	return 0;
}
