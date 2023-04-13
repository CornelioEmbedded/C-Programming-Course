#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[30];

    printf("Digite una palabra: ");
    gets(palabra);

    strupr(palabra);
    printf("Palabra en mayusculas: %s\n", palabra);

    strlwr(palabra);
    printf("Palabra en minusculas: %s\n", palabra);

    return 0;
}