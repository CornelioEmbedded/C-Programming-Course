// Ordenar palabras alfabeticamente

#include <stdio.h>
#include <string.h>

int main()
{
    char palabra_1[20], palabra_2[20];

    printf("Escribe primera palabra: ");
    gets(palabra_1);
    printf("Escribe segunda palabra: ");
    gets(palabra_2);

    if(strcmp(palabra_1, palabra_2) > 0)
    {
        printf("%s, %s", palabra_2, palabra_1);
    }else
    {
        printf("%s, %s", palabra_1, palabra_2);
    }

    return 0;
}