/*
Cuantas veces aparece una palabra en un archio
*/

#include <stdio.h>
#include <string.h>

int main()
{
	FILE* Archivo = fopen("Prueba.txt", "r");
	int aparecer = 0;
	
	if(Archivo == NULL)
	{
		printf("\nError al intentar acceder al archivo");
	}else
	{
		char texto_recibido[1000];
		char palabra_buscada[] = "El";
		
		while(fscanf(Archivo, "%s", texto_recibido) != EOF)
		{
			if(strcmp(texto_recibido, palabra_buscada) == 0)
			{
				aparecer++;
			}
		}
	}

	fclose(Archivo);
	printf("La palabra El aparecio %i veces", aparecer);
	
	return 0;
}
