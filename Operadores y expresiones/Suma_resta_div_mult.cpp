/*
Pedirle al usuario que dijite 2 numeros y que nos imprima suma, resta, multiplcación
y division
*/

#include <stdio.h>

int main()
{
	float n1,n2,suma,resta,mult,div;
	
	printf("Digite el primer numero: ");
	scanf("%f",&n1);
	
	printf("Digite el segundo numero: ");
	scanf("%f",&n2);
	
	suma = n1 + n2;
	resta = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	
	printf("Suma: %f\n",suma);
	printf("Resta: %f\n",resta);
	printf("Multiplicacion: %f\n",mult);
	printf("Division: %f\n",div);
	
	return 0;
}
