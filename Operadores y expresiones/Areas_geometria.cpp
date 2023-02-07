/*
Áreas de figuras geometricas

1- Circulo
2- Cuadrado
3- Triangulo
*/

#include <stdio.h>

int main()
{
	float pi = 3.1415;
	float dia,cua,l1,l2,cir,cuad,tria;
	
	printf("Areas de figuras geometricas en cm\n");
	printf("\nRadio de un circulo: ");
	scanf("%f",&dia);
	
	printf("Lado de un cuadrado: ");
	scanf("%f",&cua);
	
	printf("Primer lado de un triangulo: ");
	scanf("%f",&l1);
	
	printf("Segundo lado de un triangulo: ");
	scanf("%f",&l2);
	
	cir = pi * (dia*dia);
	cuad = cua * cua;
	tria = (l1 * l2) / 2;
	
	printf("\nArea de un circulo: %0.2f cm^2\n ",cir);
	printf("Area de un cuadrado: %0.2f cm^2\n",cuad);
	printf("Area de un triangulo: %0.2f cm^2\n",tria);
	
	return 0;
}
