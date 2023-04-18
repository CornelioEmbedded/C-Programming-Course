#include <stdio.h>

int main()
{
    int array[5] = {3,5,2,4,1};
    char band = 'F';
    int i = 0, dato;

    printf("Busqueda de numero: ");
    scanf("%i", &dato);

    while ((band == 'F') && (i < 5))
    {
        if(array[i] == dato)
        {
            band = 'V';
        }
        i++;
    }

    if(band == 'F')
    {
        printf("El numero no esta");
    }else
    {
        printf("El numero si existe");
    }
    return 0;
}