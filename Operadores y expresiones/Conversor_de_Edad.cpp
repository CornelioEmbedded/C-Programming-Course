/*

1 año = 12 meses
1 mes = 4 semanas
1 semana = 7 dias
1 dia = 24 horas
1 hora = 60 minutos
1 minuto = 60 segundos

Pedirle al usuario que digite la cantidad de años con las que se hara la conversion

*/

#include <stdio.h>

int main()
{
	int edad,meses,semanas,dias,horas,minutos,segundos;
	
	printf("Digite su edad: ");
	scanf("%i",&edad);
	
	meses = edad * 12;
	semanas = meses * 4;
	dias = semanas *7;
	horas = dias * 24;
	minutos = horas * 60;
	segundos = minutos * 60;
	
	printf("\nEn meses son: %i meses\n",meses);
	printf("En semanas son: %i semanas\n",semanas);
	printf("En dias son: %i dias\n",dias);
	printf("En horas son: %i horas\n",horas);
	printf("En minutos son: %i minutos\n",minutos);
	printf("En segundos son: %i segundos\n",segundos);
	
	
	return 0;
}
