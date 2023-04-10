// Matriz

#include <stdio.h>

int main()
{
    int matrix_elements[40][40], size;

    printf("Digite size de matriz: ");
    scanf("%i", &size);

    for(int i = 1; i <=size; i++)
    {
        for(int j = 1; j<=size; j++)
        {
            printf("Digite elemento [%i][%i]: ", i,j);
            scanf("%i", &matrix_elements[i][j]);
        }
    }

    for(int i = 1; i<= size; i++)
    {
        for(int j = 1; j<=size; j++)
        {
            printf("%i ", matrix_elements[i][j]);
        }
        printf("\n");
    }

    return 0;
}
