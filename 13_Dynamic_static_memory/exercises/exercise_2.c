/*
Hacer un programa que con memoria dinamica y usando tres funciones
pueda crear un arreglo dinamico dado por el usuario.
1) Obtener la cantidad de datos para regresarlos a la funcion
2) Leer los datos y llenar el arreglo dinamico por el usuario
3) Imprimir los datos dados por el usuario
*/

#include <stdio.h>
#include <stdlib.h>

int obtenerCantidad();
void rellenarDatos(int tamano, int *arraydin);
void imprimir(int tamano, int *arraydin);

int main()
{
    int tamano = obtenerCantidad();
    int *arraydin = (int *)calloc(tamano, sizeof(int));
    rellenarDatos(tamano, arraydin);
    imprimir(tamano, arraydin);

    return 0;
}

int obtenerCantidad()
{
    int cantidad;
    printf("Cuantos numeros va a ingresar?: ");
    scanf("%i", &cantidad);

    return cantidad;
}

void rellenarDatos(int tamano, int *arraydin)
{
    for (int i = 0; i < tamano; i++)
    {
        printf("Ingresa elemento de [%i]\n", i);
        scanf("%i", &arraydin[i]);
    }
}

void imprimir(int tamano, int *arraydin)
{
    for(int i = 0; i < tamano; i++)
    {
        printf("%i\n", *(arraydin + i));
    }
}