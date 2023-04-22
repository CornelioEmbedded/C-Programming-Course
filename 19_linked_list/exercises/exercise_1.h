#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int val;
    struct Nodo *next;
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

void printList(Lista lista)
{
    if(lista.head == NULL)
    {
        printf("\nLa lista esta vacia\n");
    }else
    {
        printf("Los elementos de la lista son:\n");
        Nodo *current = lista.head;

        while(current != 0)
        {
            printf("%i\n", current->val);
            current = current->next;
        }
    }
}

void addPrincipioLista(Lista *lista, int val)
{
    Nodo *newNode;
    newNode = (Nodo *)malloc(sizeof(Nodo));
    newNode->val = val;
    newNode->next = lista->head;
    lista->head = newNode;
}

void addFinalLista(Lista *lista, int val)
{
    if(lista->head == NULL)
    {
        Nodo *node = (Nodo *)malloc(sizeof(Nodo));
        node->val = val;
        node->next = NULL;
        lista->head = node;
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
        current->next = newNodo;
    }
}

void borrarPrimero(Lista *lista)
{
    if(lista->head == NULL)
    {
        printf("\nLa lista esta vacia\n");
    }else
    {
        Nodo *new_head = NULL;
        Nodo *temp = lista->head;
        new_head = temp->next;
        free(lista->head);
        lista->head = new_head;
    }
}

void borrarUltimo(Lista *lista)
{
    Nodo *temp = lista->head;
    if(lista->head == NULL)
    {
        printf("\nLa lista esta vacia\n");
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

int primerElemento(Lista lista)
{
    return lista.head->val;
}

int buscar(Lista lista, int elemento)
{
    int contador = 0;
    Nodo *temp = lista.head;
    
    //Buscamos cantidad de valores dentro de lista ligada
    while(temp->next != NULL)
    {
        contador++;
        temp = temp->next;
    }
    if(lista.head == NULL)
    {
        printf("\nLa lista esta vacia\n");
        return 0;
    }

    int cont = 0, band = 0;
    for(int i = 0; i < contador; i++)
    {
        if(lista.head->val = elemento)
        {
            band = 1;
            printf("El numero esta en el indice %i\n", cont);
            break;
        }while(lista.head->val != elemento && lista.head->next != NULL)
        {
            cont++;
            lista.head = lista.head->next;
            printf("Buscando numero...\n");
        }
    }
    return band;
}

void agregarEnesimo(Lista *lista, int valor, int lugar)
{
    Nodo *temp = lista->head;
    for(int i = 0; i < (lugar-1); i++)
    {
        temp = temp->next;
    }
    Nodo *nuevoValor;
    nuevoValor = (Nodo *)malloc(sizeof(Nodo));
    nuevoValor->val = valor;

    nuevoValor->next = temp->next;
    temp->next = nuevoValor;
}

void eliminarEnesimo(Lista *lista, int lugar)
{
    Nodo *temp = lista->head;
    Nodo *node;
    for(int i = 0; i < (lugar - 1); i++)
    {
        temp = temp->next;
    }
    node = temp;
    node = node->next;
    temp->next = node->next;
    node = NULL;
    free(node);
}