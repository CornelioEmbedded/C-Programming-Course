/*
Hacer un menu que considere las siguientes opciones:

caso 1: Cubo de un numero
caso 2: Numero par o impar
caso 3: salir
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int opcion, cubo, numero;
	
	printf("Seleccione una opcion: ");
	printf("\n1)Cubo de un numero\n");
	printf("2)Numero par o impar\n");
	printf("3) Salir\n");
	printf("\nOpcion seleccionada: ");
	scanf("%i", &opcion);
	
	if(opcion > 3)
	{
		printf("Opcion no existe");
	}else
	{
		switch(opcion)
		{
			case 1:
				printf("\nCubo de un numero\n");
				printf("\nDigite un numero:");
				scanf("%i", &numero);
				
				cubo = pow(numero,3);
				
				printf("\nEl cubo de %i es %i", numero, cubo);
				
				break;
			case 2:
				printf("\nNumero par o impar\n");
				printf("\nDigite un numero:");
				scanf("%i", &numero);
				
				if( numero % 2 == 0)
				{
					printf("\nEl numero es par");
				}else
				{
					printf("\nEl numero es impar");
				}
				
				break;
			case 3:
				printf("\nSalir\n");
			break;
		}
		
		
	}
	return 0;
}
