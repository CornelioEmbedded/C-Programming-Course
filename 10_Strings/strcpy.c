// uso de funcion strcpy

#include <stdio.h>
#include <string.h>

int main()
{
    char palabra_1[] = "Hola mundo";
    char palabra_2[30];

    strcpy(palabra_2, palabra_1);
    strcpy(palabra_2+5, "Cornelio");

    printf("%s", palabra_2);

    return 0;
}