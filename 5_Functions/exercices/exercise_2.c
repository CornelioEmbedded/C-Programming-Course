// Imprimir serie inversa con recursividad

#include <stdio.h>

int serie(int);

int main()
{
    int numero;
    printf("Digite un numero: ");
    scanf("%i", &numero);

    for(int i=numero; i>=0;i--)
    {
        printf("%i\n",serie(i));
    }

    return 0;
}

int serie(int numero)
{
    int result;
    if(numero == 1)
    {
        result = 0;
    }else
    {
        result = serie(numero-1) + 1;
    }
    return result;
}