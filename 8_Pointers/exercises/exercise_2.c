/*
Escribe un programa en el cual se soliciten al usuario 2 valores (almacenadas en 
2 variables) y mediante una funcion* que no devuelva ningun valor y que utilice 
paso por referencia, se calcule lo siguiente:
a) El resultado de elevar el primero a la potencia que indique el segundo
b) La division del valor obtenido en el inciso a y el primero valor ingresado

El resultado de a y b se debe de almacenar en las mismas variables donde se
almacenaron los datos ingresados por el usuario
*/

#include <stdio.h>
#include <math.h>

void potencia();

int main()
{
    int valor1, valor2;

    printf("Escriba primer valor: ");
    scanf("%i", &valor1);
    printf("Escriba segundo valor: ");
    scanf("%i", &valor2);

    potencia(&valor1, &valor2);

    printf("Los valore son: %i, %i", valor1, valor2);

    return 0;
}

void potencia(int *valor1, int *valor2)
{
    int cuadrado;
    cuadrado = pow(*valor1, *valor2);
    *valor2 = cuadrado / *valor1;
    *valor1 = cuadrado;
}