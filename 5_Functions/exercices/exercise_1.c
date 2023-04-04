// factorial con recursividad

#include <stdio.h>

int factorial(int);

int main()
{
    int respuesta, numero;
    printf("Digite un numero: ");
    scanf("%i", &numero);
    respuesta = factorial(numero);
    printf("El factorial es: %i", respuesta);
    return 0;
}

int factorial(int numero)
{
    int resultado;
    if (numero < 2)
    {
        resultado = 1;
    }else
    {
        resultado = factorial(numero - 1) * numero;
    }
    return resultado;

}