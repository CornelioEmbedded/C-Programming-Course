/*
Crear una estructura usando typedef llamada persona y crear una instancia de ella
llamada cliente que contenga edad, dinero y nombre, cambiar esos datos usando
las diferentes sintaxis de los apuntadores a estructuras.
*/

#include <stdio.h>

typedef struct persona
{
    int edad;
    float dinero;
    char nombre[20];
}cliente;

cliente cornelio, *p_cornelio = &cornelio;

int main()
{
    cornelio.edad = 20;
    printf("El valor de la edad de cornelio es: %i\n", cornelio.edad);
    (*p_cornelio).edad = 30;
    printf("El valor de la edad de cornelio es: %i\n", cornelio.edad);
    return 0;
}
