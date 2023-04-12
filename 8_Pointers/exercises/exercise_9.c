/*
Comprobar si un numero es par o impar, y señalar la posicion de memoria
donde se esta guardadndo el numero con punteros.
*/

#include <stdio.h>

int main()
{
    int numero, *pointer;

    printf("Digite un numero: ");
    scanf("%i", &numero);

    pointer = &numero;

    if (*pointer % 2 == 0)
    {
        printf("El numero %i es par\n", numero);
        printf("La direccion de memoria es: %p", pointer);
    }else
    {
        printf("El numero %i es inpar\n", numero);
        printf("La direccion de memoria es: %p", pointer);
    }

    return 0;
}