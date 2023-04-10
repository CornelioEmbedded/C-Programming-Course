#include <stdio.h>
#include <string.h>

struct Corredor
{
    char nombre[40];
    int edad;
    char sexo[40];
    char club[40];
}participante;

int main()
{
    char categoria[40];

    printf("Escriba los siguientes datos\n");
    printf("Nombre: ");
    gets(participante.nombre);
    printf("Sexo: ");
    gets(participante.sexo);
    printf("Club: ");
    gets(participante.club);
    printf("Edad: ");
    scanf("%i", &participante.edad);

    printf("Datos del participante\n");
    printf("Nombre: %s\n", participante.nombre);
    printf("Edad: %i\n", participante.edad);
    printf("Sexo: %s\n", participante.sexo);
    printf("Club: %s\n", participante.club);

    if(participante.edad <= 18)
    {
        printf("El participante es Juvenil");
    }
    else if(participante.edad > 18 && participante.edad <=40)
    {
        printf("El participante es Senior");
    }else
    {
        printf("El participante es Veterano");
    }

    return 0;
}
