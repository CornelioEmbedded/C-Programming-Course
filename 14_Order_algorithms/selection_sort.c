#include <stdio.h>

int main()
{
    int array[5] = {3,5,4,2,1};
    int aux, min;

    for(int i = 0; i < 5; i++)
    {
        min = i;
        for(int j = i + 1; j < 5; j++)
        {
            if(array[j] < array[min])
            {
                min = j;
            }
        }
        aux = array[i];
        array[i] = array[min];
        array[min] = aux;
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%i ", array[i]);
    }
    return 0;
}