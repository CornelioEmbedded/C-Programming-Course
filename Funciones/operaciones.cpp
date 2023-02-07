/*
Sumar, restar, multiplicar y dividir
*/

#include <stdio.h>

void sumar();
void restar();
void mult();
void div();
void menu();


int n1, n2, opcion;

int main()
{
		menu();
		
		if(opcion > 4)
		{
			printf("No existe la opcion");
		}else
		{
			
			switch(opcion)
		{
			case 1: sumar(); break;
			case 2: restar(); break;
			case 3: mult(); break;
			case 4: div(); break;
			default: break;
		}
			
		}
			

	return 0;
}

/*************************************FUNCIONES*****************************************/

void sumar()
{
	
	printf("\nDigite un numero: ");
	scanf("%i",&n1);
	printf("Digite un segundo numero: ");
	scanf("%i",&n2);
	
	int suma;
	suma = n1 + n2;
	
	printf("\nLa suma es de: %i\n",suma);
}

void restar()
{
	printf("\nDigite un numero: ");
	scanf("%i",&n1);
	printf("Digite un segundo numero: ");
	scanf("%i",&n2);
	
	int resta;
	resta = n1 - n2;
	
	printf("\nLa resta es de: %i\n",resta);

}

void mult()
{
	printf("\nDigite un numero: ");
	scanf("%i",&n1);
	printf("Digite un segundo numero: ");
	scanf("%i",&n2);
	
	int multiplicacion;
	multiplicacion = n1 * n2;
	
	printf("\nLa multiplicacion es de: %i\n",multiplicacion);
}

void div()
{
	printf("\nDigite un numero: ");
	scanf("%i",&n1);
	printf("Digite un segundo numero: ");
	scanf("%i",&n2);
	
	float division;
	division = n1 / n2;
	
	printf("\nLa division es de: %0.2f\n",division);
}

void menu()
{
	printf("Selecciona una opcion: \n");
	printf("1)Suma\n");
	printf("2)Resta\n");
	printf("3)Multiplicacion\n");
	printf("4)Division\n");
	printf("5)Salir\n");
	printf("\nSeleccione una opcion: ");
	scanf("%i", &opcion);
}



