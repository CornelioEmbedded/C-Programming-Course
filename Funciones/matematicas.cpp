/*
Funciones matematicas:
ceil(x) - Redondea al proximo entero mas cercano
fabs(x) - Valor absoluto de x
floor(x) - Redondea por defecto al entero mas proximo
fmod(x,y) - Calcula el resto de la division de x/y
pow(x,y) - Calcula x elevado a la potencia y
sqrt(x) - Devuelve la raiz cuadrada de x
*/

#include <stdio.h>
#include <math.h>

void opcion1();
void opcion2();
void opcion3();
void opcion4();
void opcion5();
void opcion6();

int main()
{
	int opcion;
	
	printf("Seleccione una opcion: \n 1)Redondeo al mas cercano \n 2)Valor absoluto \n 3)Redondeo mas proximo \n 4)Division entre dos numeros \n 5) Potencia de un numero \n 6)Raiz cuadrada\n");
	printf("Seleccione una opcion: ");
	scanf("%i", &opcion);
	
	if(opcion < 1 && opcion > 6)
	{
		printf("Opcion no existe");
	}else
	{
		switch(opcion)
		{
			case 1: opcion1(); break;
			case 2: opcion2(); break;
			case 3: opcion3(); break;
			case 4: opcion4(); break;
			case 5: opcion5(); break;
			case 6: opcion6(); break;

		}
	}
	
	return 0;
}


/**********************************************FUNCIONES********************************************/

void opcion1()
{
	float n;
	
	printf("Digite un numero: ");
	scanf("%f", &n);
	
	float red;
	red = ceil(n);
	
	printf("El numero mas proximo es %0.2f", red);

}

void opcion2()
{
	float n;
	
	printf("Digite un numero: ");
	scanf("%f", &n);
	
	float red;
	red = fabs(n);
	
	printf("El valor absoluto es %0.2f", red);
}

void opcion3()
{
	float n;
	
	printf("Digite un numero: ");
	scanf("%f", &n);
	
	float red;
	red = floor(n);
	
	printf("El numero mas proximo anterior es %0.2f", red);
}

void opcion4()
{
	float n, m;
	
	printf("Digite un numero: ");
	scanf("%f", &n);
	
	printf("Digite un numero que divida al anterior: ");
	scanf("%f", &m);
	
	float red;
	red = fmod(n,m);
	
	printf("El resto de la division es %0.2f", red);
}

void opcion5()
{
	int n, m;
	
	printf("Digite un numero: ");
	scanf("%i", &n);
	
	printf("Digite potencia de este numero: ");
	scanf("%i", &m);
	
	float red;
	red = pow(n,m);
	
	printf("%i elevado a %i es igual a %0.2f", n,m,red);
}


void opcion6()
{
	int n;
	
	printf("Digite un numero: ");
	scanf("%i", &n);
	
	float red;
	red = sqrt(n);
	
	printf("La raiz cuadra de %i es %0.2f", n,red);
}


