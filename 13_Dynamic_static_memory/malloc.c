#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    a = malloc(sizeof(int));

    *a = 5;

    printf("%i", *a);

    return 0;
}