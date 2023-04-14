#include <stdio.h>

float rtp(float *p_sueldo, int *p_acumulador_rtp)
{
    int otro_viaje;
    int costo = 10;

    if (*p_sueldo < costo)
    {
        printf("No tienes saldo suficiente para usar la rtp");
    }else
    {
        *p_sueldo -= costo;
        *p_acumulador_rtp += 1;
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
                *p_acumulador_rtp += 1;
                printf("Ya se desconto otro viaje de rtp\n");
            }
        break;
        case 2:
            printf("Gracias por viajar en rtp\n");
        break;
        default:
            printf("Caso no valido\n");
        break;
        }
    }
    return *p_sueldo, *p_acumulador_rtp;
}