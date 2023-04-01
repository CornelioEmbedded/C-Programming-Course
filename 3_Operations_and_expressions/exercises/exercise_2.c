/*
En un supermercado por la cuarentena quieren disminuir los precios al 15%
para ayudar a las personas y que no se queden sin productos en la tienda
Debes de dar el precio y el programa debe de dar los precios con el descuento
*/

#include <stdio.h>

int main()
{
    int costo;
    float descuento, nuevo_costo;

    printf("Cantidad a pagar: ");
    scanf("%i", &costo);

    descuento = costo * 0.15;

    nuevo_costo = costo - descuento;

    printf("El costo es de: %i\n", costo);
    printf("El costo con descuento es de: %f\n", nuevo_costo);
    printf("Se descontaron: %f", descuento);

    return 0;
}