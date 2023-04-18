// Almacenamiento de tiempo de ejecucion

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador, arreglo[] = {35,40,45,50,55}, variable;
    int *pointer = (int *) calloc(10, sizeof(int));
    char *pointer_2 = (char *)calloc(100, sizeof(char));

    // Imprimiendo las direcciones del arreglo

    for(contador = 0; contador < 10; contador++)
    {
        printf("Direccion del arreglo [%i] = %p\n", contador, &arreglo[contador]);
        printf("Valor del arreglo[%i]: %i\n", contador, arreglo[contador]);
    }
    printf("\n");
    for(contador = 0; contador < 10; contador++)
    {
        printf("Direccion = %p Valor = %i\n", pointer+contador, *(pointer+contador));
    }
    printf("\n");
    for(contador = 0; contador < 10; contador++)
    {
        pointer[contador] = 4*(contador+1);
        // printf("Direccion = %p Valor = %i\n", pointer+contador, *(pointer+contador));
    }
    printf("\n");
        for(contador = 0; contador < 10; contador++)
    {
        printf("Direccion = %p Valor = %i\n", pointer+contador, *(pointer+contador));
    }

    pointer = (int *) realloc(pointer, 20*sizeof(int));
    int *pointer_3 = (int *)realloc(pointer, 20*sizeof(int));

    printf("\n");
    for(contador = 0; contador < 20; contador++)
    {
        printf("Direccion = %p Valor = %i\n", pointer+contador, *(pointer+contador));
    }

    printf("\n");
    for(contador = 0; contador < 20; contador++)
    {
        printf("Direccion = %p Valor = %i\n", pointer_3+contador, *(pointer_3+contador));
    }

    free(pointer);
    free(pointer_3);
    
    return 0;
}