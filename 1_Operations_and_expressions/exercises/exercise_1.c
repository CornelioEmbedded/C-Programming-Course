// Pedirle al usuario que dijite 2 numeros y tenemos que sumarlos, 
// restarlos, multiplicarlos y dividirlos

#include <stdio.h>

int main()
{
    int numero_1, numero_2;
    int suma, resta, multiplicacion;
    float division;

    printf("Digite un numero: ");
    scanf("%i", &numero_1);
    printf("Digite un segundo numero: ");
    scanf("%i", &numero_2);

    suma = numero_1 + numero_2;
    multiplicacion = numero_1 * numero_2;

    if (numero_1 > numero_2)
    {
        resta = numero_1 - numero_2;
        division = numero_1 / numero_2;
    }else
    {
        resta = numero_2 - numero_1;
        division = numero_2 - numero_1;
    }

    printf("\nLa suma es %i\n", suma);
    printf("La resta es %i\n", resta);
    printf("La multiplicacion es %i\n", multiplicacion);
    printf("La division es %0.2f\n", division);

    return 0;
}