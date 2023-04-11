/*
Compila y codifica el siguiente programa, identiicar errores y explicar
que hace el programa.
*/

#include <stdio.h>

void showMatrix();
void showIndex();

int arr1[4][5][2], var,i,j,k;
int *point;

int main()
{
    int i;
    point = &arr1[0][0][0];
    var=1;

    for(i=0; i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            for(k=0;k<2;k++)
            {
                arr1[i][j][k] = var;
                var+=2;
            }
            printf("\n");
        }
        printf("\n");
    }

    showMatrix();
    showIndex();

    point = &arr1[0][0][0];

    for(int i=0; i<40;i++)
    {
        if(i < 10)
        {
            *(point + i) = 4*(i + 1);
        }
        if (i > 10 && i < 20)
        {
            *(point + i) = 6*(i - 9);
        }
        if (i > 20 && i < 30)
        {
            *(point + i) = 7*(i - 19);
        }
        if (i > 30)
        {
            *(point + i) = 5*(i - 29);
        }
    }

    showMatrix();
    showIndex();

    return 0;
}


void showMatrix()
{
    printf("\nSHOWING MATRIX\n");
    for(i=0; i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("[%i]", arr1[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void showIndex()
{
    int a = *(point+4);
    int b = *(point+16);
    int c = *(point+23);

    printf("A:%i\n", a);
    printf("B:%i\n", b);
    printf("C:%i\n", c);
}