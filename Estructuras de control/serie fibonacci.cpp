/*
Serie de fibonacci
*/

#include <stdio.h>

int main()
{
	int numero, p = 0, s = 1, serie;
	
	printf("Digite limite de la serie de fibonacci: ");
	scanf("%i", &numero);
	
	for(int i = 1; i <= numero; i++)
	{
		serie = p + s;
		p = s;
		s = serie;
		
		printf("%i ", serie);
		
	}
	
	return 0;
}
