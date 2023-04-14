#include <stdio.h>

float gasolina(float *p_sueldo, int *p_acumulador_gas, float *p_gasto_gas)
{
    float gasto = 0;

    printf("Gasto de gasolina: ");
    scanf("%f", &gasto);

    if(gasto > *p_sueldo)
    {
        printf("No cuenta con saldo suficiente para esa cantidad de gasolina\n");
    }else
    {
        *p_acumulador_gas = *p_sueldo - gasto;
        *p_gasto_gas = *p_gasto_gas + gasto;
        *p_acumulador_gas += 1;
    }
    printf("Gracias por cargar gasolina :)\n");
    return *p_sueldo, *p_acumulador_gas, *p_gasto_gas;
}