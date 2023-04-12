/*
Rellenar un array de 10 numeros, posteriormente utilizando punteros indicar
cuales son numeros pares y su posicion de memoria
*/

#include <stdio.h>

int main()
{
    int arreglo[10], *parreglo, contador = 0;

    for(int i = 0; i < 10; i++)
    {
        printf("Elemento[%i]: ", i);
        scanf("%i", &arreglo[i]);
    }

    parreglo = arreglo;

    for(int i = 0; i < 10; i++)
    {
        if(*parreglo % 2 == 0)
        {
            printf("Elemento[%i] con valor %i y direccion %p es par\n", i, arreglo[i], parreglo);
        }else
        {
            printf("Elemento[%i] con valor %i y direccion %p NO es par\n", i, arreglo[i], parreglo);
        }
        parreglo++;
    }



    return 0;
}