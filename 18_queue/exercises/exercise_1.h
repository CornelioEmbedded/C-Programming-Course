#include <stdio.h>
#include <stdlib.h>

typedef struct Documento
{
    char nombre[30];
    char autor[30];
    int numeroPaginas;
    int tamano;
}Documento;

typedef struct Cola
{
    int primero;
    int ultimo;
    Documento documento[100];
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
    if(queue.primero == queue.ultimo + 1)
    {
        resultado = 1;
    }
    return resultado;
}

void encolar(Cola *queue, Documento doc)
{
    queue->documento[queue->ultimo] = doc;
    queue->ultimo++;
}

Documento desencolar(Cola *queue)
{
    if(isEmpty(*queue) == 1)
    {
        printf("la cola esta vacia\n");
    }else
    {
        Documento aux = queue->documento[queue->primero - 1];
        queue->primero++;
        if(queue->primero == queue->ultimo + 1)
        {
            *queue = crearCola();
        }
        return aux;
    }
}

Documento first(Cola queue)
{
    queue.primero++;
    return queue.documento[queue.primero - 1];
}