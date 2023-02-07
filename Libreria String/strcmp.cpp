/*
strcmp (Cadena1, cadena2)
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char contrasena[] = "contrasena";
	char usuario[120];
	int intentos = 3;
	
	do
	{
		
		printf("\nEscriba clave secreta: ");
		fflush(stdin);
		scanf("%s", &usuario);
		
		if(strcmp(contrasena, usuario) == 0)
		{
			printf("\nBienvenido al sistema");
			break;
		}else
		{
			intentos = intentos - 1;
			printf("\nClave incorrecta, le queda %i intentos", intentos);
		}
		
	}while(intentos > 0);
	
	return 0;
}
