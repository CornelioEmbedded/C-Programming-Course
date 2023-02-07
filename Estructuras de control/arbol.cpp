/*

Hacer un arbol con asteristico

*
**
***
****
*****

*/

#include <stdio.h>

int main()
{
	int numero;
	
	printf("Cantidad de asteriscos: ");
	scanf("%i", &numero);
	
	for(int i = 1; i<= numero ; i++)
	{
		for(int e = 1; e <= i; e++)
		{
			printf("*1");
		}
		
		printf("\n");

	}

	return 0;
}
