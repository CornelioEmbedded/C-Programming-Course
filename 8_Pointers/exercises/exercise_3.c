/*
Escribe un programa que mediante una funcion modifique los valores de un arreglo bidimensional de
5 x 4 con valores iniciales dados por el usuario, duplicando los valores de los renglones pares y 
triplicando los renglones impares
*/

#include <stdio.h>

void showMatrix();
void multiplicar();

int arreglo[5][4], *point;

int main()
{
    point = &arreglo[0][0];

    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Valor[%i][%i]: ",i,j);
            scanf("%i", &arreglo[i][j]);
        }
    }

    showMatrix();

    multiplicar();

    showMatrix();

    return 0;
}

void showMatrix()
{
    printf("Show Matrix\n");

    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i ",arreglo[i][j]);
        }
        printf("\n");
    }
}

void multiplicar()
{
    for(int i = 0; i < 20; i++)
    {
        if (i < 4 || (i >= 8 && i < 12) || (i >=16 && i < 20))
        {
            *(point + i) *= 2;
        }else
        {
            *(point + i) *= 3;
        }
    }
}