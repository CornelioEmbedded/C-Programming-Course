//Tipos de datos en C

#include <stdio.h>
#include <stdbool.h>

int main ()
{
	int a = 1;
	char b = 'a';
	float c = 1.5;
	double d = 1.555;
	short v = 2;
	unsigned int de = 123;  //solo positivo

	
	printf("El valor del entero es de %i\n", a);
	printf("El valor del caracter es de %c\n", b);
	printf("El valor del flotante es de %f\n", c);
	printf("El valor del doble es de %lf\n", d);
	printf("El valor del short es de %i\n", v);
	printf("El valor del entero unsigned es de %i\n", de);

	return 0;
}
