/*
Suma de matrices
*/

#include <stdio.h>

int main()
{
	int arreglo[100][100], arreglo1[100][100], suma[100][100];
	int filas, columnas;
	
	printf("Digite numero de filas: ");
	scanf("%i", &filas);
	printf("Digite numero de columnas: ");
	scanf("%i", &columnas);
	
	for(int i = 1; i <= filas; i++)
	{
		for(int j = 1; j <= columnas; j++)
		{
			printf("Elemento[%i][%i]: ",i,j);
			scanf("%i", &arreglo[i][j]);
		}
	}
	
	printf("\nSegunda matriz\n");
	
	
	for(int i = 1; i <= filas; i++)
	{
		for(int j = 1; j <= columnas; j++)
		{
			printf("Elemento[%i][%i]: ",i,j);
			scanf("%i", &arreglo1[i][j]);
		}
	}
	
	printf("\nSuma de matrices 1 y 2\n");
	for(int i = 1; i <= filas; i++)
	{
		for(int j = 1; j <= columnas; j++)
		{
			suma[i][j] = arreglo[i][j] + arreglo1[i][j];
			printf("%i ", suma[i][j]);
		}
		printf("\n");
	}
	return 0;
}
