/*
Crear un programa que pueda seguir agregando contactos de email hacia
el archivo que creamos en el problema
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *fd;

struct datosPersona
{
    char nombre[20];
    char apellido[20];
    char email[30];
}datos;

int main()
{
    char direccion[] = "C:\\Users\\DELL\\Desktop\\Cornelio\\Github_repos\\C-Programming-Course\\9_File_IO\\exercises\\text.txt";
    char rpt;

    fd = fopen(direccion, "at");

    if(fd == NULL)
    {
        printf("Error al tratar de localizar archivo");
        return 1;
    }else
    {
        printf("Agregando mas contacto de email: \n");

        do
        {
            fflush(stdin);
            printf("Nombre: ");
            gets(datos.nombre);
            printf("Apellido: ");
            gets(datos.apellido);
            printf("Email: ");
            gets(datos.email);

            fprintf(fd, "\n\nNombre: ");
            fwrite(datos.nombre, 1, strlen(datos.nombre), fd);

            fprintf(fd, "\nApellido: ");
            fwrite(datos.apellido, 1, strlen(datos.apellido), fd);

            fprintf(fd, "\nEmail: ");
            fwrite(datos.email, 1, strlen(datos.email), fd);

            printf("Desea seguir agregando mas contactos(s): " );
            scanf("%c", &rpt);
        }while(rpt == 's');

    }
    fclose(fd);
    return 0;
}