#include "exercise_1.h"

int main()
{
    int opcion, valor, bandera=1;

    Lista newList = crearLista();
    printf("Se creo una nueva lista\n");

    while(bandera != 0)
    {
        printf("Que operacion te gustaria realizar?:\n");
        printf("1) Agregar al principio\n");
        printf("2) Agregar al final\n");
        printf("3) Eliminar al principio\n");
        printf("4) Eliminar al final\n");
        printf("5) Imprimir lista\n");
        printf("6) Buscar un elemento en la lista\n");
        printf("7) Agregar enesimo\n");
        printf("8) Eliminar enesimo\n");
        printf("0) Salir\n");
        scanf("%i", &opcion);

        switch(opcion)
        {
            case 1:
                printf("Que valor quieres agregar?");
                fflush(stdin);
                scanf("%i", &valor);
                addPrincipioLista(&newList, valor);
                printf("Ya se agrego %i al princpio de la lista\n", valor);
                break;
            case 2:
                printf("Que valor quieres agregar?");
                fflush(stdin);
                scanf("%i", &valor);
                addFinalLista(&newList, valor);
                printf("Ya se agrego %i al final de la lista\n", valor);
                break;
            case 3:
                borrarPrimero(&newList);
                printf("Ya se elimino el elemento de la lista\n", valor);
                break;
            case 4:
                borrarUltimo(&newList);
                printf("Ya se elimino el elemento de la lista\n", valor);
                break;
            case 5:
                printList(newList);
                break;
            case 6:
                printf("Que elemento quieres buscar?: ");
                fflush(stdin);
                scanf("%i", &valor);
                if(buscar(newList, valor) == 0)
                {
                    printf("\nNo encontrado en la lista\n");
                }
                break;
            case 7:
                printf("Que valor quieres agregar?: \n");
                fflush(stdin);
                scanf("%i", &valor);
                printf("En que lugar quieres agregar el valor?: ");
                int lugar;
                fflush(stdin);
                scanf("%i", &lugar);
                agregarEnesimo(&newList, valor, lugar);
                break;
            case 8:
                printf("En que lugar quieres eliminar el valor: ");
                fflush(stdin);
                scanf("%i", &lugar);
                eliminarEnesimo(&newList, lugar);
                printf("Numero eliminado en la posicion %i\n", lugar);
            case 0:
                printf("Gracias por usar el programa\n");
                bandera = 0;
                break;
            default:
                printf("Opcion invalida\n");
                break;
        }
    }
    return 0;
}