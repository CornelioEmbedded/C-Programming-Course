/*
Convertir numero entero a binario
*/

#include <stdio.h>

int binario(int);

int main()
{
	int numero;
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	binario(numero);
	
	
	return 0;
}

int binario(int n)
{
	if(n > 1) binario(n/2);
	printf("%i", n%2);
}
