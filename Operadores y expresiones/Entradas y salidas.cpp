//Entradas y salidas

#include <stdio.h>

int main ()
{
	int q;
	float w;
	char e[40];
	
	printf("Escribe tu nombre: \n");
	gets(e);             //Get string
	//scanf("%s", &e);  // se agrega & para agregar el valor al programa
	
	printf("El valor es: %s\n",e);
	
	return 0;
}
