/*
Calcular tarifas de saldo en celulares y poner precios
de 1000 a 1500 premium
de 500 a 999 intermedia
de 100 a 499 basica
*/

#include <stdio.h>

int main()
{
	int presupuesto;
	
	printf("Presupuesto para plan de celular: ");
	scanf("%i", &presupuesto);
	
	if(presupuesto >= 1000 && presupuesto <=1500)
	{
		printf("Se recomienda comprar plan Premium");
	}else if(presupuesto >= 500 && presupuesto <= 999)
	{
		printf("Se recomienda comprar plan Intermedio");
	}else if(presupuesto >=100 && presupuesto <= 499)
	{
		printf("Se recomienda comprar plan Basico");
	}else
	{
		printf("No alcanza ningun plan :(");
	}
	
	return 0;
}
