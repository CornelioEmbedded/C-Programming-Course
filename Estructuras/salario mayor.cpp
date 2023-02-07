/*
Realizar un programa en C que lea un arreglo de estructuras los datos
de N empleados de la empresa y que imprima los datos del empleado con mayor
y menor salario
*/

#include <stdio.h>
#include <string.h>

struct empleados
{
	
	char nombre[30];
	char sexo[30];
	int edad;
	float salario;
	
} empleado1[100];

int main()
{
	int cantidad,posicion_Mayor,posicion_Menor;
	float mayor= 0.0, menor = 0.0;
	
	printf("Cuantos empleados hay?: ");
	scanf("%i", &cantidad);
	
	for(int i=0; i<cantidad;i++)
	{
		printf("\nNombre de empleado %i: ", i+1);
		scanf("%s", &empleado1[i].nombre);
		printf("Sexo del empleado %i: ", i+1);
		scanf("%s", &empleado1[i].sexo);
		printf("Edad del empleado %i: ", i+1);
		scanf("%i", &empleado1[i].edad);
		printf("Salario del empleado %i: ", i+1);
		scanf("%f", &empleado1[i].salario);
	}
	
	for (int i = 0; i<cantidad; i++)
	{
		if(empleado1[i].salario > mayor)
		{
			mayor = empleado1[i].salario;
			posicion_Mayor = i;
		}else
		{
			menor = empleado1[i].salario;
			posicion_Menor = i;
		}
	}
	
	printf("\nEmpleado con mayor salario:\n");
	printf("Nombre: %s\nSexo: %s\nEdad: %i\n", empleado1[posicion_Mayor].nombre, empleado1[posicion_Mayor].sexo, empleado1[posicion_Mayor].edad);
	
	printf("\nEmpleado con menor salario:\n");
	printf("Nombre: %s\nSexo: %s\nEdad: %i\n", empleado1[posicion_Menor].nombre, empleado1[posicion_Menor].sexo, empleado1[posicion_Menor].edad);
	
	return 0;
}
