#include <stdio.h>

int main()
{
	int n,m, arreglo[100][100];
	
	printf("Digite primera dimension de matriz: ");
	scanf("%i", &n);
	printf("Digite segunda dimension de matriz: ");
	scanf("%i", &m);
	
	for(int i = 1; i<= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			printf("[%i][%i]: ", i,j);
			scanf("%i", &arreglo[i][j]);
		}
	}
	printf("\n");
	
	for(int i = 1; i<= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			printf("%i", arreglo[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
