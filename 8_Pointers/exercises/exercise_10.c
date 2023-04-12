/*
Determinar si un numero es primo o no con punteros y ademas indicar en
que posicion de memoria se guardo el numero
*/

#include <stdio.h>

int main()
{
    int numero, *pnumero, contador = 0;

    printf("Digite un numero: ");
    scanf("%i", &numero);

    pnumero = &numero;

    for(int i = 1; i <= *pnumero; i++)
    {
        if(*pnumero % i == 0)
        {
            contador++;
        }
    }

    if (contador > 2)
    {
        printf("El numero no es primo");
    }else
    {
        printf("El numero es primo");
    }

    return 0;
}