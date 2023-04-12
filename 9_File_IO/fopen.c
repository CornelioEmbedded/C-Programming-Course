#include <stdio.h>

int main()
{
    FILE *fd;

    char direccion[] = "C:\\Users\\DELL\\Desktop\\Cornelio\\Github_repos\\C-Programming-Course\\9_File_IO\\try.txt";

    fd = fopen(direccion, "r");

    if (fd == NULL)
    {
        printf("El archivo no existe");
    }else
    {
        printf("Se encontro un archivo\n");
        printf("Ubicacion: %s", direccion);
    }
}