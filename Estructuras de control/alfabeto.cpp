/*
Alfabeto
*/

#include <stdio.h>

int main()
{
	char letra = 'a', letra1 = 'A';
	
	do
	{
		printf("%c\n", letra);
		letra++;
	}while(letra <= 'z');
	
		do
	{
		printf("%c\n", letra1);
		letra1++;
	}while(letra1 <= 'Z');
	
	return 0;
}
