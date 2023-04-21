#include "queue.h"

int main()
{
    Cola queue = crearCola();

    printf("El primer elemento de la cola: %i\n", queue.primero);
    printf("El ultimo elemento de la cola: %i\n", queue.ultimo);

    printf("La cola esta vacia?: %i\n", isEmpty(queue));

    encolar(&queue, 10);
    encolar(&queue, 15);
    encolar(&queue, 24);

    printf("La cola esta vacia?: %i\n", isEmpty(queue));

    printf("%i\n", desencolar(&queue));

    return 0;
}