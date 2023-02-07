/*
Ingresar por teclado el nombre, la edad y el sexo de cualquier persona e imprima
solo si la persona es de sexo femenino y mayor de edad, el nombre de la persona
*/

#include <stdio.h>
#include <string.h>

int main()
{
	int edad;
	char nombre [40], sexo[20];
	
	printf("Digite su nombre: ");
	fgets(nombre,40,stdin);
	strtok(nombre, "\n");
	
	printf("Digite su sexo: ");
	fgets(sexo,20,stdin);
	strtok(sexo, "\n");
	
	printf("Digite su edad: ");
	scanf("%i", &edad);
	
	if (strcmp(sexo,"femenino") == 0|| strcmp(sexo,"Femenino") == 0 || strcmp(sexo,"FEMENINO") == 0)
	{
		if(edad >= 18)
		{
			printf("%s", nombre);
		}
	}
	return 0;
}
