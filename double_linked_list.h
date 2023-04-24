#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int val;
    struct Nodo *next;
    struct Nodo *prev;
}Nodo;

typedef struct Lista
{
    struct Nodo *head;
}Lista;

Lista crearLista()
{
    Lista lista;
    lista.head = NULL;
    return lista;
}

void imprimirLista(Lista lista)
{
    if(lista.head == NULL)
    {
        printf("\nLa lista esta vacia\n");
    }else
    {
        Nodo *current = lista.head;
        while(current != NULL)
        {
            printf("%i\n", current->val);
            current = current->next;
        }
    }
}

void printLista(Lista lista)
{
    if(lista.head == NULL)
    {
        printf("\nLa lista esta vacia\n");
    }else
    {
        printf("Los elementos de la lista son: \n");
        Nodo *current = lista.head;
        if(current->next != NULL)
        {
            do
            {
                current = current->next;
            } while (current->next != NULL);
        }
        while(current != NULL)
        {
            printf("%i\n", current->val);
            current = current->prev;
        }
    }
}

void primerNodo(Lista *lista, int valor)
{
    Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
    nodo->val = valor;
    nodo->next = NULL;
    nodo->prev = NULL;
    lista->head = nodo;
}

void addFinalLista(Lista *lista, int val)
{
    if(lista->head == NULL)
    {
        primerNodo(lista, val);
    }else
    {
        Nodo *current = lista->head;
        while(current->next != NULL)
        {
            current = current->next;
        }
        Nodo *newNodo;
        newNodo = (Nodo *)malloc(sizeof(Nodo));
        newNodo->val = val;
        newNodo->next = NULL;
        newNodo->prev = current;
        current->next = newNodo;
    }
}

void addPrincpioLista(Lista *lista, int val)
{
    if(lista->head == NULL)
    {
        primerNodo(lista, val);
    }else
    {
        Nodo *newNode = (Nodo *)malloc(sizeof(Nodo));
        newNode->val = val;
        newNode->next = lista->head;
        newNode->prev = NULL;
        lista->head->prev = newNode;
    }
}

void addEnesimoLista(Lista *lista, int valor)
{
    int contador, posicion;
    printf("Ingrese la posicion: ");
    scanf("%i", &posicion);
    Nodo *temp;
    temp = lista->head;

    for(contador = 1; contador < posicion-1; contador++)
    {
        temp = temp->next;
        if(temp==NULL)
        {
            printf("Hay un error");
        }
    }

    Nodo *newNodo;
    newNodo = (Nodo *)malloc(sizeof(Nodo));
    newNodo->val = valor;
    newNodo->next = temp->next;
    newNodo->prev = temp;
    temp->next->prev = newNodo;
    temp->next = newNodo;
}

void borrarPrimero(Lista *lista)
{
    if(lista->head == NULL)
    {
        printf("La lista esta vacia");
    }else
    {
        Nodo *nuevo_head = NULL;
        Nodo *temp = lista->head;
        nuevo_head = temp->next;
        free(lista->head);
        if(nuevo_head != NULL)
        {
            nuevo_head->prev = NULL;
            lista->head = nuevo_head;
        }else
        {
            lista->head = NULL;
        }
    }
}

void borrarUltimo(Lista *lista)
{
    Nodo *temp = lista->head;
    if(lista->head == NULL)
    {
        printf("la lista esta vacia");
    }else
    {
        if(temp->next == NULL)
        {
            lista->head = NULL;
            free(lista->head);
        }else
        {
            Nodo *current = lista->head;
            while(current->next->next != NULL)
            {
                current = current->next;
            }
            current->next = NULL;
            free(current->next);
        }
    }
}

void addEnesimoLista(Lista *lista, int valor)
{
    int contador, posicion;
    printf("Ingrese la posicion: ");
    scanf("%i", &posicion);
    Nodo *temp, *temp2;
    temp = lista->head;
    temp2 = lista->head;
    int cont = 0;
    while(temp2->next != NULL)
    {
        temp2 = temp2->next;
        cont++;
    }
    if(contador < posicion)
    {
        printf("No se puede agreagr el elemento a la lista, es muy grande\n");
    }else
    {
        for(contador = 1; contador < posicion - 1; contador++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("Hay un error\n");
            }
        }
    }
    Nodo *nuevoNodo;
    nuevoNodo = (Nodo *)malloc(sizeof(Nodo));
    nuevoNodo->val = valor;
    nuevoNodo->next = temp->next;
    nuevoNodo->prev = temp;
    temp->next->prev = nuevoNodo;
    temp->next = nuevoNodo;
}