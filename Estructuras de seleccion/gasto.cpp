/*
Visualizar la tarifa de la luz segun el gasto de corriente electrica
Para un gasto menor de 10000 kwh -  tarifa e 1.2
Entre 1000 y 1850 - tarifa es 1.0
Mayor a 1850 - tarifa es 0.9
*/

#include <stdio.h>

int main()
{
	float gasto;
	
	printf("Digite el gasto de corriente electrica: ");
	scanf("%f", &gasto);
	
	if( gasto <= 1000)
	{
		printf("Su tarifa es de 1.2");
		
	}else if(gasto > 1000 && gasto <= 1850)
	{
		printf("Su tarifa es de 1.0");
	}else
	{
		printf("Su tarifa es de 0.9");
	}
	
	return 0;
}
