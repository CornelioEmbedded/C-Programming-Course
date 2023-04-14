#include "libraries.h"
#include "variables.h"

int main()
{
    #include "pointer_asignation.h"

    printf("****CALCULADORA DE GASTOS****\n");
    printf("Ingrese su sueldo mensual: ");
    scanf("%f", &sueldo);
    printf("\nQue desea hacer?: ");

    while (state)
    {
        printf("\n1) Entrar al metro");
        printf("\n2) Usar el cablebus");
        printf("\n3) Rentar una ecobici");
        printf("\n4) Usar el RTP");
        printf("\n5) Entrar al metrobus");
        printf("\n6) Usar la ruta");
        printf("\n7) Entrar al tren ligero");
        printf("\n8) Cargar gasolina");
        printf("\n9) Ver instrucciones");
        printf("\n10) Ver gastos");
        printf("\n11) Imprimir gastos en archivo txt");
        printf("\n0) Salir del programa");
        printf("\nOpcion: ");
        scanf("%i", &gasto);
        // scanf("%i", &letra);

        // if (letra)
        // {
        //     printf("\n\n");
        // }

        switch(gasto)
        {
            case 1:
                printf("Seleccionaste el metro\n");
                metro(p_sueldo, p_acumulador_metro);
                printf("Saldo actual es %0.2f\n", *p_sueldo);
                printf("Que mas te gustaria hacer?: ");
            break;
            case 2:
                printf("Seleccionaste el cablebus\n");
                cablebus(p_sueldo, p_acumulador_cable);
                printf("Saldo actual es %0.2f\n", *p_sueldo);
                printf("Que mas te gustaria hacer?: ");
            break;
            case 3:
                printf("Seleccionaste la cablebici\n");
                ecobici(p_sueldo, p_acumulador_eco);
                printf("Saldo actual es %0.2f\n", *p_sueldo);
                printf("Que mas te gustaria hacer?: ");
            break;
            case 4:
                printf("Seleccionaste el RTP\n");
                rtp(p_sueldo, p_acumulador_rtp);
                printf("Saldo actual es %0.2f\n", *p_sueldo);
                printf("Que mas te gustaria hacer?: ");
            break;
            case 5:
                printf("Seleccionaste el metrobus\n");
                microBus(p_sueldo, p_acumulador_microbus);
                printf("Saldo actual es %0.2f\n", *p_sueldo);
                printf("Que mas te gustaria hacer?: ");
            break;
            case 6:
                printf("Seleccionaste la ruta\n");
                ruta(p_sueldo, p_acumulador_ruta);
                printf("Saldo actual es %0.2f\n", *p_sueldo);
                printf("Que mas te gustaria hacer?: ");
            break;
            case 7:
                printf("Seleccionaste el tren ligero\n");
                trenLigero(p_sueldo, p_acumulador_tren);
                printf("Saldo actual es %0.2f\n", *p_sueldo);
                printf("Que mas te gustaria hacer?: ");
            break;
            case 8:
                printf("Seleccionaste cargar gasolina\n");
                gasolina(p_sueldo, p_acumulador_gas, p_gasto_gas);
                printf("Saldo actual es %0.2f\n", *p_sueldo);
                printf("Que mas te gustaria hacer?: ");
            break;
            case 9:
                printf("Seleccionaste ver instrucciones\n");
                archivo = fopen("instructions.txt", "r+");
                if (archivo == NULL)
                {
                    printf("Error al abrir el archivo\n");
                    return -1;
                }else
                {
                    while((caracter=fgetc(archivo)) != EOF)
                    {
                        printf("%c", caracter);
                    }
                    fclose(archivo);
                }
            break;
            case 10:
                printf("Servicio\tViajes\tMonto Gastado\n");
                printf("Metro\t\t%d\t\t%d\n", *p_acumulador_metro, (*p_acumulador_metro * *p_gasto_metro));
                printf("Cablebus\t\t%d\t\t%d\n", *p_acumulador_cable, (*p_acumulador_cable * *p_gasto_cablebus));
                printf("Ecobici\t\t%d\t\t%d\n", *p_acumulador_eco, (*p_acumulador_eco * *p_gasto_ecobici));
                printf("RTP\t\t%d\t\t%d\n", *p_acumulador_rtp, (*p_acumulador_rtp * *p_gasto_rtp));
                printf("MicroBus\t\t%d\t\t%d\n", *p_acumulador_microbus, (*p_acumulador_microbus * *p_gasto_microbus));
                printf("Ruta\t\t%d\t\t%d\n", *p_acumulador_ruta, (*p_acumulador_ruta * *p_gasto_ruta));
                printf("Tren ligero\t\t%d\t\t%d\n", *p_acumulador_tren, (*p_acumulador_tren * *p_gasto_tren));
                printf("Gasolina\t\t%d\t\t%d\n", *p_acumulador_gas, (*p_acumulador_gas * *p_gasto_gas));
                printf("\nSu sueldo restante es: %0.2f\n\n", *p_sueldo);

            break;
            case 11:
                fd = fopen(direccion, "at");
                if (fd == NULL)
                {
                    printf("Error al crear el archivo");
                }else
                {
                    printf("Escribe la fecha: ");
                    gets(fecha);

                    printf("Archivo de texto ha sido creado o actualizado\n");
                    printf("Con el nombre de bills.txt\n");
                    fprintf(fd, "Fecha: %s\n", fecha);
                    fprintf(fd, "Servicio\tViajes\tMonto Gastado\n");
                    fprintf(fd, "Metro\t\t%d\t\t%d\n", *p_acumulador_metro, (*p_acumulador_metro * *p_gasto_metro));
                    fprintf(fd, "Cablebus\t\t%d\t\t%d\n", *p_acumulador_cable, (*p_acumulador_cable * *p_gasto_cablebus));
                    fprintf(fd, "Ecobici\t\t%d\t\t%d\n", *p_acumulador_eco, (*p_acumulador_eco * *p_gasto_ecobici));
                    fprintf(fd, "RTP\t\t%d\t\t%d\n", *p_acumulador_rtp, (*p_acumulador_rtp * *p_gasto_rtp));
                    fprintf(fd, "MicroBus\t\t%d\t\t%d\n", *p_acumulador_microbus, (*p_acumulador_microbus * *p_gasto_microbus));
                    fprintf(fd, "Ruta\t\t%d\t\t%d\n", *p_acumulador_ruta, (*p_acumulador_ruta * *p_gasto_ruta));
                    fprintf(fd, "Tren ligero\t\t%d\t\t%d\n", *p_acumulador_tren, (*p_acumulador_tren * *p_gasto_tren));
                    fprintf(fd, "Gasolina\t\t%d\t\t%d\n", *p_acumulador_gas, (*p_acumulador_gas * *p_gasto_gas));
                    fprintf(fd, "\nSu sueldo restante es: %0.2f\n\n", *p_sueldo);
                }
            break;
            case 0:
                state = false;
            break;
            default:
                printf("Esa es una opcion no valida");
            break;
        }
        
    }
    return 0;
}