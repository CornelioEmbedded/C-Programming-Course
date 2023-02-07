#include <stdio.h>

int main()
{
	int arreglo[100], numero, entero;
	
	scanf("%i ", &numero);
	
	for(int i = 1; i<= numero; i++)
	{
		scanf("%i ", &arreglo[i]);
	}
	
	scanf("%i ", &entero);
	
	if(entero < 0 && entero > 1)
	{
		return 0;
	}else
	{
	
	if(entero == 0)
	{
		for(int i = 1; i<= numero; i++)
		{
			if(arreglo[i] % 2 == 0)
			{
				printf("%i ", arreglo[i]);
			}
		}
	}else if(entero == 1)
	{
		for(int i = 1; i<= numero; i++)
		{
			if(arreglo[i] % 2 != 0)
			{
				printf("%i ", arreglo[i]);
			}
		}
	}
}
return 0;	
}
