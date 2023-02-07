/*
Fibonacci con resursividad
*/

#include <stdio.h>

int fibonacci(int);

int main()
{
	int numero;
	
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	for(int i = 0; i<= numero; i++)
	{
		printf("%i\n",fibonacci(i));
		
	}
	
	
	return 0;
}

int fibonacci(int n)
{
	
	if(n <= 1){
		
		return n;
	}else
	{
		n = fibonacci(n-1) + fibonacci(n-2);
		return n;
	}
}
