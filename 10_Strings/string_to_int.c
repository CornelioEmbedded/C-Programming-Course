#include <stdio.h>
#include <stdlib.h>

int main()
{
    char numero[10];
    int entero;

    printf("Digite un numero: ");
    gets(numero);

    entero = atoi(numero);

    printf("El valor sumado es: %i", entero + 7);
    
    return 0;
}