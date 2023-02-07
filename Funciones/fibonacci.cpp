/*
Recursividad con fibonacci
*/

#include <stdio.h>

int fibonacci(int);

int main()
{
	int numero;
	
	printf("Digite limite de serie: ");
	scanf("%i", &numero);
	
	for(int i = 0; i<= numero; i++)
	{
		printf("%i\n", fibonacci(i));
	}
	
	return 0;
}

/***************************************FUNCIONES*********************************************/

int fibonacci(int n)
{
	if( n == 1 || n == 0)
	{
		return n;
	}else
	{
		n = fibonacci(n-1) + fibonacci(n-2);
		return n;
	}
}
