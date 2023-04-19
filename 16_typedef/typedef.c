#include <stdio.h>

typedef struct hola
{
    int uno;
}hola;

int main()
{
    hola cornelio;
    cornelio.uno = 9;
    printf("%i", cornelio.uno);
}