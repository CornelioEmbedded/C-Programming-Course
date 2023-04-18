/*
Reservar memoria con malloc para un array de tipo double para 1000 numeros,
y comprobar si el puntero es valido (si el puntero devuelve NULL, significa
que no hay suficiente memoria)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMERO_TOTAL 1000

int main()
{
    double *p_double;
    p_double = malloc(NUMERO_TOTAL * sizeof(double));

    if(p_double == NULL)
    {
        printf("No hay sufciente memoria\n");
        return -1;
    }else
    {
        printf("Hay suficiente memoria\n");
        for(int i = 0; i < NUMERO_TOTAL; i++)
        {
            *(p_double + i) = rand();
            printf("Indice[%i]: %lf\n", i+1, p_double[i]);
        }
    }
    return 0;
}