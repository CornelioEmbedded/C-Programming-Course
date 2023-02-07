/*
Consideremos una funcion que recibe un numero n e imprime los numeros del n al 1 con recursividad
*/

#include <stdio.h>

void cuenta(int);

int main()
{
	int n;
	
	printf("Digite un numero: ");
	scanf("%i", &n);
	
	cuenta(n);
	
	return 0;
}

void cuenta(int numero)
{
	
	int valor;
	if(numero < 1){
		return;
	}else
	{
		printf("%i", numero);
		cuenta(numero-1);	
	}

}
