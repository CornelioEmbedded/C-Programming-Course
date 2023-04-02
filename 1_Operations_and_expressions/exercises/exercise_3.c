// Aumentar el salario en una empresa el 10%

#include <stdio.h>

int main()
{
    char nombre[40];
    int salario;
    float salario_final;

    printf("Digite su nombre: ");
    gets(nombre);

    printf("Digite su salario: ");
    scanf("%i", &salario);

    salario_final = salario + (salario * 0.1);

    printf("Su salario final es de: %0.2f", salario_final);
    return 0;
}