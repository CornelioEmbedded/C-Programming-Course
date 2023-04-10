// Fibonacci con recursividad

#include <stdio.h>

int fibonacci(int);

int main()
{
    int numero;

    printf("Digite un numero: ");
    scanf("%i", &numero);

    for(int i = 1; i<= numero; i++)
    {
        printf("%i, ", fibonacci(i));
    }

    return 0;
}

int fibonacci(int numero)
{
    int resultado;

    if (numero == 1 || numero ==2)
    {
        resultado = 1;
    }else
    {
        resultado = fibonacci(numero-1) + fibonacci(numero-2); 
    }
    return resultado;
}