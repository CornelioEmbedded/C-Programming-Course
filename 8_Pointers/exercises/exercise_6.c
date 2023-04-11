// Pedir su nombre al usuario y devolver el numero de vocales que hay

#include <stdio.h>
#include <string.h>

int getVowels(char *nombre);

int main()
{
    char nombre[40];

    printf("Digita tu nombre: ");
    gets(nombre);

    printf("La cantidad de vocales es: %i", getVowels(nombre));
    return 0;
}

int getVowels(char *nombre)
{
    int contador = 0;
    while(*nombre)
    {
        switch (*nombre)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            contador++;
        }
        nombre++;
    }
    return contador;
}