/*
Escribe un programa para trabajar sobre un arreglo de 10 elementos en el cual se 
soliciten al usuario los valores de dicho arreglo y posteriormente se puedan hacer
las sigueintes operaciones

1) Ingresar o modificar elementos del arreglo
2) Mostrar suma de los elementos
3) Realizar la multiplicacion de los elementos
4) Realizar la suma solo de los elementos divisibles entre 3
5) Multiplicar por 3 cada elemento del arreglo

El usuario seleccionara la opcion de su preferencia y el programa mostrara los datos del
arreglo original y el resultado de la opcion seleccionada. El programa debe realizarse en
un menu que debe ejecutarse continuamente hasta que el usuario decida salir
*/

#include <stdio.h>
#include <string.h>

void modificar(int arreglo[]);
void suma(int arreglo[]);
void multiplicacion(int arreglo[]);
void div3(int arreglo[]);
void mult3(int arreglo[]);

int main()
{
	int arreglo[10], opcion, bucle = 1;
	
	for(int i = 0; i< 10; i++)
	{
		printf("Elemento[%i]: ",i);
		scanf("%i", &arreglo[i]);
	}
	
	printf("Este programa ejecuta operaciones sobre un arreglo\n");
	
	while(bucle)
	{
		printf("\n1) Modificar elementos del arreglo\n");
		printf("2) Mostrar suma de los elementos\n");
		printf("3) Realizar multiplicacion de los elementos\n");
		printf("4) Realizar la suma de los elementos solo divisibles entre 3\n");
		printf("5) Multiplicar por 3 cada elemento del arreglo\n");
		printf("6) Salir\n");
		printf("Seleccione una opcion: ");
		scanf("%i", &opcion);
		
		switch(opcion)
		{
			case 1: modificar(arreglo); break;
			case 2: suma(arreglo); break;
			case 3: multiplicacion(arreglo); break;
			case 4: div3(arreglo); break;
			case 5: mult3(arreglo); break;
			case 6: bucle = 0; printf("\nHa salido del sistema"); break;
			default: break;
		}
	}
	
	return 0;
}


/*************************************FUNCIONES****************************************/

void modificar(int arreglo[])
{
	int elemento;
	char decision[5];
	
	for(int i = 0; i< 10; i++)
	{
		printf("Elemento[%i]: %i\n", i, arreglo[i]);
	}
	
	printf("\nDesea modificar un elemento del arreglo?: ");
	fflush(stdin);
	scanf("%s", &decision);
	
	if(strcmp("SI",decision) == 0 || strcmp("Si",decision) == 0 || strcmp("si",decision) == 0)
	{
		printf("Que elemento desea modificar?: ");
		scanf("%i", &elemento);
	
		for(int i = 0; i< 10; i++)
		{
			if(i == elemento)
			{
				printf("\nDigite nuevo numero del arreglo: ");
				scanf("%i", &arreglo[i]);
			}
		}
	}
	
	
}

void suma(int arreglo[])
{
	
	int suma;
	
	for(int i = 0; i< 10; i++)
	{
		suma = suma + arreglo[i];
	}
	
	printf("\nLa suma de los elementos del arreglo:%i\n", suma);
	
}

void multiplicacion(int arreglo[])
{
	
	int mult = 1;
	
	for(int i = 0; i< 10; i++)
	{
		mult = mult * arreglo[i];
	}
	
	printf("\nLa multiplicacion de los elementos del arreglo:%i\n", mult);
	
}

void div3(int arreglo[])
{
	int suma, numero;
	
	for(int i = 0; i< 10; i++)
	{
		numero = arreglo[i];
		if(numero % 3 == 0)
		{
			suma=suma+numero;
		}
	}
	
	printf("\nLa suma de los numeros divisibles entre 3 del arreglo:%i\n", suma);
}

void mult3(int arreglo[])
{
	int arreglo3[10];

	for(int i = 0; i< 10; i++)
	{
		arreglo3[i] = arreglo[i] * 3;
		printf("Elemento[%i]: %i\n", i, arreglo3[i]);
	}
	
}
