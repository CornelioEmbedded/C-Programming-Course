/*
Area de un trapecio
*/

#include <stdio.h>

int main()
{
	
	int base_mayor,base_menor,altura;
	float area;
	
	printf("Base mayor de un trapecio: ");
	scanf("%i",&base_mayor);
	printf("Base menor de un trapecio: ");
	scanf("%i",&base_menor);
	printf("Altura de un trapecio: ");
	scanf("%i",&altura);
	
	area = (base_mayor*base_menor*altura) / 2;
	
	printf("Area del trapecio: %0.2f",area);
	
	return 0;
	
}
