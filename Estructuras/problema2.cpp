/*
Crear la estructura asignatura
Agregar a la estructura alumno un arreglo de asignaturas
Inicializar alumnos con sus respectivas materias
Permitir al usuario ver las materias
Permitiri al usuario modificarlas
Permitir al usuario cerar alumnos con sus materias desde cero
*/

#include <stdio.h>
#include <string.h>

typedef struct asignatura
{
	char materia[20];
	
}asignatura;

typedef struct alumno
{
	asignatura asignatura[5];
}alumno;

int main()
{
	int opcion, bucle=1;
	alumno jorge, juan, nuevo;
	char Alumno_Nuevo[30];

	//Materias ya establecidas

	strcpy(jorge.asignatura[0].materia, "Matematicas");
	strcpy(jorge.asignatura[1].materia, "Fisica");
	strcpy(jorge.asignatura[2].materia, "Quimica");
	
	strcpy(juan.asignatura[0].materia, "Musica");
	strcpy(juan.asignatura[1].materia, "Ingles");
	strcpy(juan.asignatura[2].materia, "Programacion");
	
	
	printf("Este programa permite ver materias, modificarlas y crear alumnos\n");

	while(bucle)
	{
		
	printf("\n1)Ver materias\n");
	printf("2)Modificar materias\n");
	printf("3)Crear alumnos\n");
	printf("4)Salir");
	printf("\nSeleccione la opcion que quieras: \n");
	scanf("%i", &opcion);
	
	

	
	switch(opcion)
	{
		case 1: 
			
			int alumno;
			
			printf("\nDe que alumno quieres ver las materias?\n");
			printf("1) Jorge\n2) Juan\n3) %s", Alumno_Nuevo);
			printf("\nSeleccione una opcion: ");
			scanf("%i", &alumno);
			
			if(alumno > 2)
			{
					printf("\nSus materias son: \n");
					printf("%s\n%s\n%s\n", nuevo.asignatura[0].materia,nuevo.asignatura[1].materia,nuevo.asignatura[2].materia);
					break;
				
			}
			switch(alumno)
			{
				case 1:
					printf("\nSus materias son: \n");
					printf("%s\n%s\n%s\n", jorge.asignatura[0].materia,jorge.asignatura[1].materia,jorge.asignatura[2].materia);
					break;
				
				case 2:
					printf("\nSus materias son: \n");
					printf("%s\n%s\n%s\n", juan.asignatura[0].materia,juan.asignatura[1].materia,juan.asignatura[2].materia);
					break;
		 	}
		 	
		 	break;
		 	
		case 2:
			
			int alumno1;
			
			printf("\nDe que alumno deseas modificar materia?\n");
			printf("1) Jorge\n2) Juan\n");
			printf("Seleccione una opcion: ");
			scanf("%i", &alumno1);
			
			switch(alumno1)
			{
				case 1:
					
					int opcion1;
					char materia0[30];
					
					printf("\nSus materias son: \n1) %s\n2) %s\n3) %s\n",  jorge.asignatura[0].materia,jorge.asignatura[1].materia,jorge.asignatura[2].materia);
					printf("Selecciona la materia que quieres modificar: ");
					scanf("%i", &opcion1);
					
					for(int i = 1; i <= opcion1; i++)
					{
						if(i == opcion1)
						{
							printf("\nSeleccionaste la materia %s\n",  jorge.asignatura[i-1].materia);
							printf("Escribe el nombre de la nueva materia: ");
							scanf("%s", &materia0);
							
							strcpy( jorge.asignatura[i-1].materia, materia0);
						}
					}
					
					break;
				
				case 2:
					
					int opcion2;
					char materia1[30];
					
					printf("\nSus materias son: \n1) %s\n2) %s\n3) %s\n",  juan.asignatura[0].materia,juan.asignatura[1].materia,juan.asignatura[2].materia);
					printf("Selecciona la materia que quieres modificar: ");
					scanf("%i", &opcion2);
					
					for(int i = 1; i <= opcion2; i++)
					{
						if(i == opcion2)
						{
							printf("\nSeleccionaste la materia %s\n",  juan.asignatura[i-1].materia);
							printf("Escribe el nombre de la nueva materia: ");
							scanf("%s", &materia1);
							
							strcpy( juan.asignatura[i-1].materia, materia1);
						}
					}
					
					break;
					
					
			}
			
			break;
		
		case 3:
			
			printf("Escribe el nombre del alumno nuevo: ");
			scanf("%s", &Alumno_Nuevo);
			
			printf("\nEscribe el nombre de las tres materias para el Alumno: %s\n", Alumno_Nuevo);
			
			for(int i = 0; i< 3; i++)
			{
				scanf("%s", nuevo.asignatura[i].materia);
			}
			
			printf("\nEl alumno nuevo tiene estas materias:\n");
			printf("\nSus materias son: \n1) %s\n2) %s\n3) %s\n",  nuevo.asignatura[0].materia,nuevo.asignatura[1].materia,nuevo.asignatura[2].materia);
				
			break;
		
		case 4: bucle = 0; printf("\nHa salido del sistema\n"); break;
		
		default: printf("\nOpcion invalida\n");
	

	}
}
	
	return 0;
}

