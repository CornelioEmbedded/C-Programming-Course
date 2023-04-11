/*
Hacer una variable de tipo int, float char, almacenar datos en cada una
de las variables, indicar la posicion de memoria donde se encuentran 
guardados los datos de cada cariable con punteros.
*/

#include <stdio.h>

int main()
{
    int entero = 10, *pentero = &entero;
    float flotante = 5.5, *pflotante = &flotante;
    char caracter = 'a', *pcaracter = &caracter;

    printf("Entero: %i Apuntador: %i Apuntador entero: %p\n", entero, *pentero, pentero);
    printf("Flotante: %f Apuntador: %f Apuntador flotante: %p\n", flotante, *pflotante, pflotante);
    printf("Caracter: %c Apuntador: %c Apuntador caracter: %p\n", caracter, *pcaracter, pcaracter);

    return 0;
}