// Contabilizar espacios

#include <stdio.h>

int main()
{
    char oracion[40];
    int contador = 0;

    printf("Escribe una oracion: ");
    gets(oracion);

    for(int i = 1; i < 40; i++)
    {
        if(oracion[i] == ' ')
        {
            contador++;
        }
    }

    printf("\nLa oracion tiene %i espacios", contador);

    return 0;
}