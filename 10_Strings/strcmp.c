#include <stdio.h>
#include <string.h>

int main()
{
    char palabra_1[] = "Cornelio";
    char palabra_2[] = "Cornelio21";

    if (strcmp(palabra_1, palabra_2) == 0)
    {
        printf("IGUALES");
    }else
    {
        printf("DIFERENTES");
    }
    return 0;
}