#include "exercise_2.h"

int main()
{
    int opcion, valor, bandera;
    printf("Este programa usa listas ligadas circulares para evaluar sus operaciones\n");

    Lista nuevaLista = crearListaCircular();

    printf("Se creo una nueva lista circular\n");
    while(bandera != 0)
    {
        printf("\nQue operacion desea realizar?\n");
        printf("1) Agregar al principio\n");
        printf("2) Agregar al final\n");
        printf("3) Eliminar al inicio\n");
        printf("4) Eliminar al final\n");
        printf("5) Imprimir lista\n");
        printf("6) Buscar elemento en la lista\n");
        printf("7) Agregar enesimo\n");
        printf("8) Eliminar enesimo\n");
        printf("0) Salir del programa\n");
        printf("Opcion: ");
        scanf("%i", &opcion);

        switch(opcion)
        {
            case 1:
                printf("\nSeleccionaste agregar al inicio\n");
                printf("Que valor quieres agregar?: ");
                fflush(stdin);
                scanf("%i", &valor);
                addPrincipioListaCircular(&nuevaLista, valor);
                printf("\nYa se agrego %i al principio de la lista\n", valor);
                break;
            case 2:
                printf("\nSeleccionaste agregar al final\n");
                printf("Que valor quieres agregar?: ");
                fflush(stdin);
                scanf("%i", &valor);
                addFinalListaCircular(&nuevaLista, valor);
                printf("\nYa se agrego %i al final de la lista\n", valor);
                break;
            case 3:
                printf("\nSeleccionaste eliminar al inicio\n");
                borrarPrimerCircular(&nuevaLista);
                printf("Ya se elimino el primero elemento\n");
                break;
            case 4:
                printf("\nSeleccionaste eliminar al final\n");
                borrarUltimoCircular(&nuevaLista);
                printf("Ya se elimino el ultimo elemento\n");
                break;
            case 5:
                printf("\nSeleccionaste imprimir la lista\n");
                printListaCircular(nuevaLista);
                break;
            case 6:
                printf("\nSeleccionaste buscar un elemento\n");
                printf("Que elemento quieres buscar?: ");
                fflush(stdin);
                scanf("%i", &valor);
                if(buscarCircular(nuevaLista, valor) == 0)
                {
                    printf("Numero no encontrado en la lista\n");
                }
                break;
            case 7:
                printf("\nSeleccionaste agregar enesimo\n");
                int lugar;
                printf("Que valor quieres agregar?: ");
                fflush(stdin);
                scanf("%i", &valor);
                printf("En que lugar quieres agregar el valor: ");
                fflush(stdin);
                scanf("%i", &lugar);
                agregarEnesimoCircular(&nuevaLista, valor, lugar);
                printf("Numero %i agregado en la posicion %i\n", valor, lugar);
                break;
            case 8:
                printf("\nSeleccionaste eliminar enesimo\n");
                printf("Que lugar deseas eliminar?: ");
                fflush(stdin);
                scanf("%i", &lugar);
                eliminarEnesimoCircular(&nuevaLista, lugar);
                printf("Numero eliminado de la posicion %i\n", lugar);
                break;
            case 0:
                printf("\nGracias por usar el programa\n");
                bandera = 0;
                break;
            default:
                printf("\nOpcion no valida\n");
                break;
        }
    }
}