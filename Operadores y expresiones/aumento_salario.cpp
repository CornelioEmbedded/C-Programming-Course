/*
Aumentar el salario en una empresa el 10%
*/

#include <stdio.h>

int main()
{
	char nombre[40];
	float salario,aumento = 0.1,salario_final;
	
	printf("Inserte nombre del empleado\n");
	gets(nombre);
	
	printf("\nSu nombre es: %s\n",nombre);

	printf("\nInserte su salario: ");
	scanf("%f",&salario);
	
	salario_final = salario + (salario*0.1);
	
	printf("\nSu salario total es: %f\n",salario_final);
	
	return 0;
}
