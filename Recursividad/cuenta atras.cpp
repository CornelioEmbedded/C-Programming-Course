#include <stdio.h>

void cuenta(int);

int main()
{
	int n;
	printf("Numero a empezar: \n");
	scanf("%i", &n);
	cuenta(n);
	
	return 0;
}

void cuenta(int numero9A)
{
	if(numeroA < 0)
	{
		return;
	}else
	{
		printf("\n%i", numeroA);
		cuenta(numeroA-1);
	}
}
