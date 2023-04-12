/*
Dado un vector de 10 elementos = {1,2,3,4,4,7,8,9,5,4} escribir un
programa en C (haciendo uso de punteros) que muestre las direcciones 
de memoria de cada elemento del vector
*/

#include <stdio.h>

int main()
{
    int arreglo[10] = {1,2,3,4,4,7,8,9,5,4};
    int *point;
    point = &arreglo[0];
    for (int i = 0; i<10; i++)
    {
        point = &arreglo[i];
        printf("Elemento[%i] con valor %i: %p\n", i, arreglo[i], point);
    }
    
    return 0;
}