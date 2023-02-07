/*
Una distribuidora de motocicletas tiene una promocion de fin de año que consiste
en lo siguiente. Las motos marca Honda tienen un descuento del 5%, las marcas
Yamaha del 8% y las Suzuki del 10%, las otras marcas 2%
*/


#include <stdio.h>
#include <string.h>

int main()
{
	char marca[20];
	float precio, final;
	int valor;
	
	printf("Ingrese marca que desea comprar: ");
	fgets(marca,20,stdin);
	strtok(marca,"\n");
	
	if(strcmp(marca,"Honda")==0 || strcmp(marca,"honda")==0 || strcmp(marca,"HONDA")==0)
	{
		valor = 1;
		printf("Digite el precio de la moto: ");
		scanf("%f",&precio);
		printf("Las motocicletas Honda tienen un descuento del 5% \n");
		
	}else if(strcmp(marca,"Yamaha")==0 || strcmp(marca,"yamaha")==0 || strcmp(marca,"YAMAHA")==0)
	{
		valor = 2;
		printf("Digite el precio de la moto: ");
		scanf("%f",&precio);
		printf("Las motocicletas Yamaha tienen un descuento del 8% \n");
		
	}else if(strcmp(marca,"Suzuki")==0 || strcmp(marca,"suzuki")==0 || strcmp(marca,"SUZUKI")==0)
	{
		valor = 3;
		printf("Digite el precio de la moto: ");
		scanf("%f",&precio);
		printf("Las motocicletas Suzuki tienen un descuento del 10% \n");
		
	}else
	{
		valor = 4;
		printf("Digite el precio de la moto: ");
		scanf("%f",&precio);
		printf("Las motocicletas de otras marcas tienen un descuento del 2% \n");
	}
	
	switch(valor)
	{
		case 1:
			final = precio - (precio*0.05);
			printf("\nEl precio final a pagar es de %0.2f \n", final);
			break;
			
		case 2: 
			final = precio - (precio*0.08);
			printf("\nEl precio final a pagar es de %0.2f \n", final);
			break;
			
		case 3: 
			final = precio - (precio*0.1);
			printf("\nEl precio final a pagar es de %0.2f \n", final);
			break;
			
		case 4:
			final = precio - (precio*0.02);
			printf("\nEl precio final a pagar es de %0.2f \n", final);
			break;
	}
	
	return 0;
}
