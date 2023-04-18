/*
Pedir una cadena de caracteres al usuario, posteriormente utilizar malloc
para reservar memoria para esa cadena de caracteres string
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[30];
    char *p_nombre;
    printf("Digita un nombre: ");
    gets(nombre);

    p_nombre = (char *)malloc(strlen(nombre));
    strcpy(p_nombre, nombre);
    printf("La palabra introducida es: %s\n", p_nombre);

    free(p_nombre);

    return 0;
}