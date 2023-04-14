#include <stdio.h>

float microBus(float *p_sueldo, int *p_acumulador_microbus)
{
    int otro_viaje;
    int costo = 17;

    if (*p_sueldo < costo)
    {
        printf("No tienes saldo suficiente para usar el micro bus");
    }else
    {
        *p_sueldo -= costo;
        *p_acumulador_microbus += 1;
        printf("\nYa se desconto un viaje\n");
        printf("Quieres descontar otro viaje?: 1)SI 2)NO");
        scanf("%i", &otro_viaje);

        switch (otro_viaje)
        {
        case 1:
            if (*p_sueldo < costo)
            {
                printf("No puedes pasar de nuevo con tu saldo actual\n");
            }else
            {
                *p_sueldo -= costo;
                *p_acumulador_microbus += 1;
                printf("Ya se desconto otro viaje de micro bus\n");
            }
        break;
        case 2:
            printf("Gracias por viajar en microbus\n");
        break;
        default:
            printf("Caso no valido\n");
        break;
        }
    }
    return *p_sueldo, *p_acumulador_microbus;
}