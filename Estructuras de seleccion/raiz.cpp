/*
Ingrese un numero y calcule e imprima su raiz cuadrada
Si el numero es negativo imprima el numero y un mensaje
que diga tiene raiz imaginaria
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int numero;
	float raiz;
	
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	raiz = sqrt(numero);
	
	if(raiz > 0)
	{
		printf("La raiz de %i es %f", numero, raiz);
	}else
	{
		printf("El numero %i tiene raiz imaginaria", numero);
	}
	
	return 0;
}
