#include <stdio.h>

int main()
{
    FILE *archivo = fopen("Prueba.txt", "a");

    if(archivo == NULL)
    {
        printf("Error al intentar crear o acceder al archivo\n");
    }else
    {
        char letra;

        while((letra = getchar()) != '\n')
        {
            fputc(letra, archivo);
        }
    }
    fclose(archivo);

    return 0;
}