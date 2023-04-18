/*
Diseña un tipo asbtracto llamado Automovil en el cual puedas encapsular elementos
como marca, modelo, color, tipo de auto.

Elaborar un programa en el cual se incluya la definicion de tu tipo abstraccion
de dato, y utilizando memoria dinamica crea un arreglo dinamico de automoviles
en el cual se solicite al suario en tiempo de ejecicion, el tamaño de dicho arreglo

Dentro de la funcion principal del programa, el usuario debera indicar y llenar el 
numero de automoviles determinando el tamaño de dicho arreglo

Recuerda que es recomendable el uso de funciones para trabajar con implementaciones
de tipo asbtracto de datos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Automovil
{
    char marca[30];
    char modelo[30];
    char color[30];
    char tipo[30];
}Automovil;

void llenarDatosAutomovil(Automovil *carrosCreados, int cantidadAutos);
void imprimirDatos(Automovil *carrosCreados, int cantidadAutos);


int main()
{
    int cantidadAutos;
    printf("Cuantos autos quiere?: ");
    fflush(stdin);
    scanf("%i", &cantidadAutos);

    Automovil *carrosCreados = (Automovil *)calloc(cantidadAutos, sizeof(Automovil));
    printf("Llenado datos del automovil\n");
    llenarDatosAutomovil(carrosCreados, cantidadAutos);
    printf("Imprimir datos del automovil\n");
    imprimirDatos(carrosCreados, cantidadAutos);
    free(carrosCreados);
    return 0;
}

void llenarDatosAutomovil(Automovil *carrosCreados, int cantidadAutos)
{
    for(int i = 0; i < cantidadAutos; i++)
    {
        // char marca[30], modelo[30], color[30], tipo[30];
        fflush(stdin);

        printf("Escribe marca del auto %i: ", i+1);
        fflush(stdin);
        scanf("%s", carrosCreados[i].marca);

        printf("Escribe el modelo del auto %i: ", i+1);
        fflush(stdin);
        scanf("%s", carrosCreados[i].modelo);

        printf("Escribe el tipo del auto %i: ", i+1);
        fflush(stdin);
        scanf("%s", carrosCreados[i].tipo);
        
        printf("Escribe el color del auto %i: ", i+1);
        fflush(stdin);
        scanf("%s", carrosCreados[i].color);
        
        printf("\n\n");
    }
}

void imprimirDatos(Automovil *carrosCreados, int cantidadAutos)
{
    for(int i = 0; i < cantidadAutos; i++)
    {
        printf("Marca del auto[%i]: %s\n", i+1, carrosCreados[i].marca);
        printf("Modelo del auto[%i]: %s\n", i+1, carrosCreados[i].modelo);
        printf("Color del auto[%i]: %s\n", i+1, carrosCreados[i].color);
        printf("Tipo del auto[%i]: %s\n", i+1, carrosCreados[i].tipo);
        printf("\n\n");
    }
}