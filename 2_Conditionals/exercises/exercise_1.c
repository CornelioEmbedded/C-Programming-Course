// Simular tienda

#include <stdio.h>

int main()
{
    int opcion;
    float saldo = 5000, dinero_depositado, dinero_retirado;

    printf("\t********************************\n");
    printf("\t*Este es un simulador de tienda*\n");
    printf("\t********************************\n");
    printf("\t*Selecciona una opcion:        *\n");
    printf("\t*1) Depositar dinero           *\n");
    printf("\t*2) Retirar dinero             *\n");
    printf("\t*3) Salir del cajero           *\n");
    printf("\t*Opcion selecionada:");
    scanf("%i", &opcion);

    switch(opcion)
    {
        case 1:
        printf("Cuanto dinero desea depositar?: ");
        scanf("%f", &dinero_depositado);
        printf("Su saldo es de: %0.2f", dinero_depositado + saldo);
        break;

        case 2:
        printf("Cuanto dinero desea retirar?: ");
        scanf("%f", &dinero_retirado);

        if (dinero_retirado > saldo)
        {
            printf("No cuenta con saldo suficiente :(");
            break;
        }
        printf("Su saldo es de: %0.2f", saldo - dinero_retirado);
        break;

        case 3:
        printf("Gracias por usar el cajero");
        break;

        default:
        printf("Opcion no disponible");
        break;
    }

    return 0;
}