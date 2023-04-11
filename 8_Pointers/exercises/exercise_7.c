/*
Pedir una cadena de caracteres al usuario e indicar cuantas veces aparece
la vocal a,e,i,o,u en la cadena de caracteres
*/

#include <stdio.h>
#include <string.h>

int vowelA(char *nombre);
int vowelE(char *nombre);
int vowelI(char *nombre);
int vowelO(char *nombre);
int vowelU(char *nombre);

int main()
{
    char nombre[40];

    printf("Digita tu nombre: ");
    gets(nombre);

    printf("Silaba a: %i\n", vowelA(nombre));
    printf("Silaba e: %i\n", vowelE(nombre));
    printf("Silaba i: %i\n", vowelI(nombre));
    printf("Silaba o: %i\n", vowelO(nombre));
    printf("Silaba u: %i\n", vowelU(nombre));

    return 0;
}

int vowelA(char *nombre)
{
    int contador = 0;

    while (*nombre)
    {
        switch (*nombre)
        {
        case 'a':
        case 'A':
            contador++;
        }
        nombre++;
    }
    return contador;
}

int vowelE(char *nombre)
{
    int contador = 0;

    while (*nombre)
    {
        switch (*nombre)
        {
        case 'e':
        case 'E':
            contador++;
        }
        nombre++;
    }
    return contador;
}

int vowelI(char *nombre)
{
    int contador = 0;

    while (*nombre)
    {
        switch (*nombre)
        {
        case 'i':
        case 'I':
            contador++;
        }
        nombre++;
    }
    return contador;
}

int vowelO(char *nombre)
{
    int contador = 0;

    while (*nombre)
    {
        switch (*nombre)
        {
        case 'o':
        case 'O':
            contador++;
        }
        nombre++;
    }
    return contador;
}

int vowelU(char *nombre)
{
    int contador = 0;

    while (*nombre)
    {
        switch (*nombre)
        {
        case 'u':
        case 'U':
            contador++;
        }
        nombre++;
    }
    return contador;
}