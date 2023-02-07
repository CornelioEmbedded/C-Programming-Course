/*
Simular una tienda con entradas y salidas de capital
*/

#include <stdio.h>

int main()
{
	
	int opcion;
	float dinero_deposito, dinero_retiro, dinero_cuenta = 2500;
	
	printf("Tienda \n");
	printf("Seleccione una opcion:\n");
	printf("\n1)Depositar Dinero\n");
	printf("2)Retirar Dinero\n");
	printf("3)Ver Estado de Cuenta\n");
	printf("Opcion seleccionada: \n");
	scanf("%i", &opcion);
	
	if(opcion > 3)
	{
		printf("No existe esa opcion");
	}else
	{

	switch(opcion)
	{
		case 1:
			
			printf("\nCuanto dinero desea depositar?: ");
			scanf("%f",&dinero_deposito);
			
			printf("Se han depositado %0.2f a su cuenta", dinero_deposito);
			
			dinero_cuenta = dinero_cuenta + dinero_deposito;
			printf("\nSu saldo actual es de: %0.2f", dinero_cuenta);
			
		break;
			
		case 2:
			
			printf("\nCuanto dinero desea retirar?: ");
			scanf("%f",&dinero_retiro);
			
			printf("Se han retirado %0.2f a su cuenta", dinero_retiro);
			
			dinero_cuenta = dinero_cuenta - dinero_retiro;
			printf("\nSu saldo actual es de: %0.2f", dinero_cuenta);
		
		
		break;
		
		case 3:
			
			printf("\nDinero en su cuenta: %0.2f", dinero_cuenta);
			
		break;
	
	}
	
}
	return 0;
}
