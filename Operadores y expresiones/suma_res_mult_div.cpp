/*
Pedir 2 numeros al usuario, sumar, restar, multiplicar y dividir
*/

#include <stdio.h>

int main()
{
	int numero1, numero2;
	float suma, resta, mult, div;
	
	printf("Digite primer numero: ");
	scanf("%i", &numero1);
	printf("Digite segundo numero: ");
	scanf("%i", &numero2);
	
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	mult = numero1 * numero2;
	div = numero1 / numero2;
	
	printf("\nSuma: %0.2f\n",suma);
	printf("Resta: %0.2f\n",resta);
	printf("Multiplicacion: %0.2f\n",mult);
	printf("Division: %0.2f\n",div);
	
	return 0;
}
