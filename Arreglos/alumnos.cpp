/*
Realizar un programa que lea en un arreglo el sexo de los N estudiantes del curso de C 
y que determine cuantos hombres y cuantas mujeres se encuentran en el grupo, suponiendo
que los datos son extraidos uno por uno
*/

#include <stdio.h>
#include <string.h>

int main()
{
	int cantidad, masc=0, fem = 0;
	char alumnos[30];
	
	printf("Digite cantidad de alumnos: ");
	scanf("%i", &cantidad);
	
	for(int i = 0; i<cantidad; i++)
	{
		printf("Sexo de alumno %i: ", i);
		fflush(stdin);
		gets(alumnos);
		
		if(strcmp(alumnos,"masculino") == 0 || strcmp(alumnos,"Masculino") == 0 || strcmp(alumnos,"MASCULINO") == 0)
		{
			masc = masc + 1;
		}else if (strcmp(alumnos,"femenino") == 0 || strcmp(alumnos,"Femenino") == 0 || strcmp(alumnos,"FEMENINO") == 0)
		{
			fem = fem + 1;
		}
	}
	
	printf("Hay %i alumnos masculinos\n", masc);
	printf("Hay %i alumnos femeninos",  fem);
	

	
	
	return 0;
}
