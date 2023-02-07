/*
Seleccionar un tipo de vehiculo e indicar el peaje a pagar segun un valor numerico

1) Turismo, peaje = $500
2) Autobus, peaje = $3000
3) Motocicleta, peaje = $300
*/

#include <stdio.h>

int main()
{
	int opcion;
	
	printf("Seleccione opcion de peaje:");
	printf("\n1)Turismo\n");
	printf("2)Autobus\n");
	printf("3)Motocicleta");
	printf("\nSeleccione opcion: ");
	scanf("%i", &opcion);
	
	if(opcion > 3)
	{
		printf("Vehiculo no autorizado");
	}else
	{
		switch(opcion)
		{
			case 1: printf("El monto a pagar es de $500"); break;
			case 2: printf("El monto a pagar es de $3000"); break;
			case 3: printf("El monto a pagar es de $300"); break;
			
		}
	}
	
	
	
	return 0;
}
