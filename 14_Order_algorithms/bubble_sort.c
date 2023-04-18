#include <stdio.h>

int main()
{
    int array[5] = {3,4,2,1,5};
    int aux;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(array[i] < array[j])
            {
                aux = array[j];
                array[j] = array[i];
                array[i] = aux;
            }
        }
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%i", array[i]);
    }
    printf("\n");

}