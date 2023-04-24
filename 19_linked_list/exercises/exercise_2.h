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
    int tamano;
}Lista;

Lista crearListaCircular()
{
    Lista lista;
    lista.head = NULL;
    lista.tamano = 0;
    return lista;
}

void printListaCircular(Lista lista)
{
    if(lista.head == NULL)
    {
        printf("\nLa lista esta vacia\n");
    }else
    {
        int tamano = lista.tamano;
        printf("\nLos elementos de la lista son: \n");
        Nodo *current = lista.head;
        while(tamano > 0)
        {
            printf("%i\n", current->val);
            current = current->val;
            tamano--;
        }
    }
}

void addFinalListaCircular(Lista *lista, int valor)
{
    int posicion = lista->tamano;
    if(lista->head == NULL)
    {
        Nodo *node = (Nodo *)malloc(sizeof(Nodo));
        node->val = valor;
        node->next = node;
        lista->head = node;
    }else
    {
        Nodo *current = lista->head;
        while(posicion != 1)
        {
            current = current->next;
            posicion--;
        }
        Nodo *newNode;
        newNode = (Nodo *)malloc(sizeof(Nodo));
        current->next = newNode;
        newNode->val = valor;
        newNode->next = lista->head;
    }
    lista->tamano++;
}

void addPrincipioListaCircular(Lista *lista, int valor)
{
    Nodo *node, *temp;
    node = (Nodo *)malloc(sizeof(Nodo));
    node->val = valor;
    if(lista->head == NULL)
    {
        node->next = node;
    }else
    {
        node->next = lista->head;
        temp = lista->head;
        while(temp->next != lista->head)
        {
            temp = temp->next;
        }
        temp->next = node;
    }
    lista->head = node;
    lista->tamano++;
}

void borrarPrimerCircular(Lista *lista)
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
        lista->tamano--;
    }
}

void borrarUltimoCircular(Lista *lista)
{
    Nodo *temp = lista->head;
    int posicion = lista->tamano;
    if(lista->head == NULL)
    {
        printf("\nLa lista esta vacia\n");
    }else
    {
        if(temp->next == lista->head)
        {
            temp->next = NULL;
            free(temp->next);
            lista->tamano--;
        }else
        {
            Nodo *current = lista->head;
            while(posicion != 1)
            {
                current = current->next;
                posicion--;
            }
            current->next = NULL;
            free(current->next);
            current->next = lista->head;
            lista->tamano--;
        }
    }
}

int buscarCircular(Lista lista, int numero)
{
    int band = 0;
    if(lista.head == NULL)
    {
        printf("\nLa lista esta vacia\n");
    }else
    {
        int contador = 0, control = 0;
        for(int i = 0; i < lista.tamano; i++)
        {
            if(lista.head->val == numero)
            {
                band = 1;
                printf("El numero esta en el indice: %i\n", i);
                break;
            }while(lista.head->val != numero && control < lista.tamano)
            {
                contador++;
                control++;
                lista.head = lista.head->next;
                printf("\nBuscando numero...\n");
            }
        }
    }
    return band;
}

void agregarEnesimoCircular(Lista *lista, int valor, int lugar)
{
    Nodo *temp = lista->head;
    for(int i = 0; i < (lugar - 1); i++)
    {
        temp = temp->next;
    }
    Nodo *newValue;
    newValue = (Nodo *)malloc(sizeof(Nodo));
    newValue->val = valor;
    newValue->next = temp->next;
    temp->next = newValue;
}

void eliminarEnesimoCircular(Lista *lista, int lugar)
{
    Nodo *temporal = lista->head;
    Nodo *node;
    for(int i = 0; i < (lugar-1); i++)
    {
        temporal = temporal->next;
    }
    node = temporal;
    node = node->next;
    temporal->next = node->next;
    node = NULL;
    free(node);
}