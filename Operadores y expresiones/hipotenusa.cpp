/*
Sacar la hipotenusa de un triangulo rectangulo pidiendo
al usuario el valor de los 2 catetos
*/

#include <stdio.h>
#include <math.h>
int main()
{
	float cateto1, cateto2, hipotenusa;
	
	printf("Digite primer cateto: ");
	scanf("%f",&cateto1);
	printf("Digite segundo cateto: ");
	scanf("%f",&cateto2);
	
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	printf("\nEl valor de la hipotenusa es: %0.2f", hipotenusa);
	
	return 0;
}
