#include "exercise_1.h"

int main()
{
    int cantidadDocs;
    printf("Cuanto documentos quieres registrar?: ");
    fflush(stdin);
    scanf("%i", &cantidadDocs);

    Documento *p_documento = (Documento *)malloc(cantidadDocs * sizeof(Documento));
    Cola documentoCola = crearCola();

    // Llenar datos de documentos
    for (int i = 0; i < cantidadDocs; i++)
    {
        printf("Escribe el nombre del documento [%i]:", i);
        fflush(stdin);
        gets(p_documento[i].nombre);

        printf("Escribe el autor del documento [%i]:", i);
        fflush(stdin);
        gets(p_documento[i].autor);
        
        printf("Escribe el numero de paginas [%i]:", i);
        fflush(stdin);
        scanf("%i", &p_documento[i].numeroPaginas);

        printf("Escribe el tamano del documento [%i]:", i);
        fflush(stdin);
        scanf("%i", &p_documento[i].autor);

        encolar(&documentoCola, p_documento[i]);

    }

    printf("\nComenzando impresion de elementos\n");

    float total = 0.0;

    for(int i = 0; i < cantidadDocs; i++)
    {
        Documento colaRegresada = desencolar(&documentoCola);
        printf("Nombre: %s\n", colaRegresada.nombre);
        float tiempoSegundos = (colaRegresada.numeroPaginas) * 3;
        (tiempoSegundos) /= 60;
        printf("Tiempo de impresion: %0.2f minutos\n", tiempoSegundos);
        total += tiempoSegundos;
    }
    printf("Tiempo total de impresion: %0.2f\n", total);

}