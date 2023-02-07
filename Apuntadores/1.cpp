#include <stdio.h>

int main()
{
	
	int a = 15;
	int b = 5;
	
	int *apuntador_a = &a;
	int *apuntador_b = &b;
	
	printf("%p", apuntador_a);
	
	
	return 0;
}
