/*
strrchr(Cadena, caracter)
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char abecedario[] = "abcedfghijklmnopqrstuvwxyz";
	char corte;
	
	printf("Letra donde se cortara el abecedario: ");
	fflush(stdin);
	scanf("%c", &corte);
	
	printf("%s", strrchr(abecedario, corte));
	
	
	return 0;
}
