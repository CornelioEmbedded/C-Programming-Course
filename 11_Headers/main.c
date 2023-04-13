#include <stdio.h>
#include "suma.h"
#include "resta.h"

int main()
{
    int *p_a, *p_b, a, b;

    printf("Digite un numero: ");
    scanf("%i", &a);
    
    printf("Digite otro numero: ");
    scanf("%i", &b);

    p_a = &a;
    p_b = &b;

    int respuesta_suma = suma(p_a, p_b);
    int respuesta_resta = resta(p_a, p_b);

    printf("La suma es: %i\n", respuesta_suma);
    printf("La resta es: %i\n", respuesta_resta);

    return 0;
}