#include <stdio.h>

int main()
{
    FILE *archivo = fopen("Prueba.txt", "a");

    if (archivo == NULL)
    {
        printf("Error al intentar crear o acceder al archivo");
    }else
    {
        char text[] = "cornelio";
        fprintf(archivo, "Texto escrito %s\n", text);
        printf("Archivo creado");
    }
    fclose(archivo);
    return 0;
}