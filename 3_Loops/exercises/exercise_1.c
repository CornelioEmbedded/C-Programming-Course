// Serie de fibonacci

#include <stdio.h>

int main()
{
    int limite, x = 0, y = 1, z = 1;

    printf("Hasta donde que numero quieres la serie de fibonacci: ");
    scanf("%i", &limite);

    for(int i=1; i<=limite; i++)
    {
        z = x + y;
        x = y;
        y = z;

        printf("%i ", z);
    }

    return 0;
}