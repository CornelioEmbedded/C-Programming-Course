/*
Hacer un programa en C para guardar los numeros de celular que muestre
un menu con las siguientes opciones

1. crear (nombre apellidos y celular)
2. agregar mas contactos
3. visualizar contactos existentes
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *fd;

struct datosPersonales
{
    char nombre[30];
    char apellido[30];
    char celular[10];
}datos;

void crear();
void agregarContactos();
void visualizarContactos();

int main()
{
    int opcion;

    do{
        printf("Seleccione una opcion: \n");
        printf("1- Crear\n");
        printf("2- Agregar mas contactos\n");
        printf("3- Visualizar contactos existentes\n");
        printf("4- Salir\n");
        printf("Opcion: ");
        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:crear();break;
        case 2:agregarContactos();break;
        case 3:visualizarContactos();break;
        }
    }while (opcion >= 4);
    
    return 0;
}

void crear()
{
    char direccion[] = "C:\\Users\\DELL\\Desktop\\Cornelio\\Github_repos\\C-Programming-Course\\9_File_IO\\exercises\\text.txt";
    char rpt;

    fd = fopen(direccion, "wt");

    if(fd == NULL)
    {
        printf("Error al tratar de localizar archivo");
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
            printf("Celular: ");
            gets(datos.celular);

            fprintf(fd, "\n\nNombre: ");
            fwrite(datos.nombre, 1, strlen(datos.nombre), fd);

            fprintf(fd, "\nApellido: ");
            fwrite(datos.apellido, 1, strlen(datos.apellido), fd);

            fprintf(fd, "\nCelular: ");
            fwrite(datos.celular, 1, strlen(datos.celular), fd);

            printf("Desea seguir agregando mas contactos(s): " );
            scanf("%c", &rpt);
        }while(rpt == 's');
    }
}


void agregarContactos()
{
    char direccion[] = "C:\\Users\\DELL\\Desktop\\Cornelio\\Github_repos\\C-Programming-Course\\9_File_IO\\exercises\\text.txt";
    char rpt;

    fd = fopen(direccion, "at");

    if(fd == NULL)
    {
        printf("Error al tratar de localizar archivo");
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
            printf("Celular: ");
            gets(datos.celular);

            fprintf(fd, "\n\nNombre: ");
            fwrite(datos.nombre, 1, strlen(datos.nombre), fd);

            fprintf(fd, "\nApellido: ");
            fwrite(datos.apellido, 1, strlen(datos.apellido), fd);

            fprintf(fd, "\nCelular: ");
            fwrite(datos.celular, 1, strlen(datos.celular), fd);

            printf("Desea seguir agregando mas contactos(s): " );
            scanf("%c", &rpt);
        }while(rpt == 's');
    }
}

void visualizarContactos()
{
    char direccion[] = "C:\\Users\\DELL\\Desktop\\Cornelio\\Github_repos\\C-Programming-Course\\9_File_IO\\exercises\\text.txt";
    char rpt;

    fd = fopen(direccion, "at");

    if(fd == NULL)
    {
        printf("Error al tratar de localizar archivo");
    }else
    {
        while((rpt=fgetc(fd))!=EOF)
        {
            if(rpt=='\n')
            {
                printf("\n");
            }else
            {
                putchar(rpt);
            }
        }
    }
}