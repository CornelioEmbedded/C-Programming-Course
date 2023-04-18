#include <stdio.h>

int main()
{
    int array[5] = {3,5,2,4,1};
    int aux, pos;

    for(int i = 0; i < 5; i++)
    {
        pos = i;
        aux = array[i];

        while((pos > 0) && (aux < array[pos - 1]))
        {
            array[pos] = array[pos - 1];
            pos--;
        }
        array[pos] = aux;
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%i ", array[i]);
    }
    return 0;
}