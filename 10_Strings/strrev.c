#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[] = "Cornelio";
    printf("Palabra normal: %s\n", palabra);
    strrev(palabra);
    printf("Palabra invertida: %s\n", palabra);

    return 0;
}