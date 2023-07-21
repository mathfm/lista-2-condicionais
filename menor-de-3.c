#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, valor3;
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    if (valor1 <= valor2 && valor1 <= valor3)
        printf("%d", valor1);

    else if (valor2 <= valor1 && valor2 <= valor3)
        printf("%d", valor2);

    else
        printf("%d", valor3);

    return 0;
}