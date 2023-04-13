#include <stdio.h>
#include <stdlib.h>

int main()
{
    char numero[10];
    float entero;

    printf("Digite un numero flotante: ");
    gets(numero);

    entero = atof(numero);

    printf("El valor sumado es: %f", entero + 7);
    
    return 0;
}