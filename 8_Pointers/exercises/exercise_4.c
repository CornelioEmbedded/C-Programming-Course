// imprimir el alfabeto en mayusculas con punteros

#include <stdio.h>

int main()
{
    char caracter;
    char *pcaracter;
    pcaracter = &caracter;

    for(caracter = 'A'; caracter<='Z'; caracter++)
    {
        printf("%c ", *pcaracter);
    }

    return 0;
}