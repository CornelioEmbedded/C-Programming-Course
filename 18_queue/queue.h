#include <stdio.h>
#include <stdlib.h>

typedef struct Cola
{
    int primero;
    int ultimo;
    int lista[100];
}Cola;

Cola crearCola()
{
    Cola queue;
    queue.primero = 1;
    queue.ultimo = 0;
    return queue;
}

int isEmpty(Cola queue)
{
    int resultado = 0;
    if (queue.primero == queue.ultimo + 1)
    {
        resultado = 1;
    }
    return resultado;
}

void encolar(Cola *queue, int num)
{
    queue->lista[queue->ultimo] = num;
    queue->ultimo++;
}

int desencolar(Cola *queue)
{
    if(isEmpty(*queue) == 1)
    {
        printf("\nLa cola esta vacia\n");
    }else
    {
        int aux = queue->lista[queue->primero - 1];
        queue->primero++;

        if(queue->primero == queue->ultimo + 1)
        {
            *queue = crearCola();
        }
        return aux;
    }
}

int firstCola(Cola queue)
{
    queue.primero++;
    return queue.lista[queue.primero - 1];
}