/*
strcat(Destino, fuente)
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char n1[] = "cornelio", n2[] = "posadas";
	char final[50];
	
	strcat(final,n1);
	strcat(final," ");
	strcat(final,n2);
	
	printf("%s", final);
	return 0;
}

