/*
Una tienda ofrece un descuento del 15% sobre el total de la compra y
un cliente desea saber cuanto debera pagar finalmente por su compra
*/

#include <stdio.h>

int main()
{
	float compra, total;
	
	printf("Costo total de la compra: ");
	scanf("%f",&compra);
	
	total = compra - (compra * 0.15);
	
	printf("Costo total con descuento: %0.2f",total);
	
	return 0;
}

