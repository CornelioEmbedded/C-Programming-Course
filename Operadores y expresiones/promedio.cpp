/*
Calcule la media aritmetica de 3 numeros cualesuqiera dados por el usuario
*/

#include <stdio.h>

int main()
{
	int numero1, numero2, numero3;
	float promedio;
	
	printf("Digite primer numero: ");
	scanf("%i",&numero1);
	printf("Digite segundo numero: ");
	scanf("%i",&numero2);
	printf("Digite tercer numero: ");
	scanf("%i",&numero3);
	
	promedio = (numero1 + numero2 + numero3)/3;
	
	printf("\nPromedio de los 3 numeros: %0.2f",promedio);
	
	return 0;
}
