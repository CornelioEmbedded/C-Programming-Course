/*
Hacer dos estructuras una llamada promedio que tendra los siguientes miembros:
nota1, nota2, nota3 y otra estructura llamada alumno que tendra los siguientes miembros:
nomre, sexo, edad. Hacer que la estructura promedio este anidada en la estructura alumno,
luego pedir todos los datos para un alumno, luego calcular su promedio y por ultimo imprimir
todos sus datos incluidos el promedio
*/

#include <stdio.h>
#include <string.h>

struct promedio
{
	float nota1, nota2, nota3;
	
};

struct alumno
{
	char nombre[30];
	char sexo[30];
	int edad;
	struct promedio prom;
	
}alumno1;

int main()
{
	float promedio;
	
	printf("Digite datos del alumno:\n");
	printf("Nombre: ");
	gets(alumno1.nombre);
	strtok(alumno1.nombre, "\n");
	printf("Sexo: ");
	gets(alumno1.sexo);
	strtok(alumno1.sexo, "\n");
	printf("Edad: ");
	scanf("%i", &alumno1.edad);
	
	printf("\nNota 1: ");
	scanf("%f", &alumno1.prom.nota1);
	printf("Nota 2: ");
	scanf("%f", &alumno1.prom.nota2);
	printf("Nota 3: ");
	scanf("%f", &alumno1.prom.nota3);
	
	promedio = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3) /3;
	
	printf("\nEl promedio del alumno es de: %0.2f", promedio);
	
	printf("\nDatos completos del alumno:\n");
	printf("Nombre: %s\nSexo: %s\nEdad: %i\n", alumno1.nombre, alumno1.sexo, alumno1.edad);
	
	return 0;
}
