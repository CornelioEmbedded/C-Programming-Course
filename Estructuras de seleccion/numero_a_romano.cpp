/*
Numeros enteros a romanos
*/

#include <stdio.h>

int main()
{
	int numero, millar, centena, decena, unidad;
	
	printf("Digite un numero: ");
	scanf("%i", &numero);
	
	millar = numero /1000;
	centena = (numero%1000)/100;
	decena = (numero%100 )/10;
	unidad = numero %10;
	
	if(numero > 3000)
	{
		printf("No llega hasta este numero :(");
	}else
	{
	
		
	switch(millar)
	{
		case 1:printf("M"); break; 
		case 2:printf("MM"); break; 
		case 3:printf("MMM"); break;

	}
	
	switch(centena)
	{
		case 1:printf("C"); break; 
		case 2:printf("CC"); break; 
		case 3:printf("CCC"); break;
		case 4:printf("CD"); break;
		case 5:printf("D"); break;
		case 6:printf("DC"); break;
		case 7:printf("DCC"); break;
		case 8:printf("DCCC"); break;
		case 9:printf("CM"); break;
	}
	
	switch(decena)
	{
		case 1:printf("X"); break; 
		case 2:printf("XX"); break; 
		case 3:printf("XXX"); break;
		case 4:printf("XL"); break;
		case 5:printf("L"); break;
		case 6:printf("LX"); break;
		case 7:printf("LXX"); break;
		case 8:printf("LXXX"); break;
		case 9:printf("XC"); break;
		
	}
	
	switch(unidad)
	{
		case 1:printf("I"); break; 
		case 2:printf("II"); break; 
		case 3:printf("III"); break;
		case 4:printf("IV"); break;
		case 5:printf("V"); break;
		case 6:printf("VI"); break;
		case 7:printf("VII"); break;
		case 8:printf("VIII"); break;
		case 9:printf("IX"); break;
		
	}
}
		
	return 0;
}
