/*
En un supermercado por la cuarentena quieren disminuir
los precios al 15% para ayudar a las personas y que no
se queden los productos en la tienda. Debes de dar el
precio y el programa debe de dar los precios con el 
descuento y el descuento
*/

#include <stdio.h>

int main()
{
	float precio,precio_final,descuento_final;
	float descuento = 0.15;
	
	printf("Cuanto vale?: ");
	scanf("%f",&precio);
	
	descuento_final = precio * descuento;
	
	precio_final = precio - descuento_final;
	
	printf("\nEl descuento es de: %f\n",descuento_final);
	printf("El precio final es de: %f\n",precio_final);
	
	return 0;
}
