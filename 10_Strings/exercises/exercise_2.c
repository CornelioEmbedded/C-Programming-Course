// Determinar si una palabra es palindromo

#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[30], palabra_2[30];

    printf("Digite una palabra: ");
    gets(palabra);

    strcpy(palabra_2, palabra);

    strrev(palabra_2);

    if(strcmp(palabra, palabra_2) == 0)
    {
        printf("Es un palindromo");
    }else
    {
        printf("No es un palindromo");
    }
    return 0;
}