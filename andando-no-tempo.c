#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/986?quizId=8313

void viagem(int creditoA, int creditoB, int creditoC)
{

    int somaA = creditoA - creditoB;
    int somaB = creditoB - creditoC;
    int somaC = creditoC - creditoA;

    if (somaA == 0 || somaB == 0 || somaC == 0)
    {
        printf("S\n");
        return;
    }
    else if (somaA - creditoC == 0 || somaA + creditoC == 0)
    {
        printf("S\n");
        return;
    }
    else if (somaB - creditoA == 0 || somaB + creditoA == 0)
    {
        printf("S\n");
        return;
    }
    else if (somaC - creditoB == 0 || somaC + creditoB == 0)
    {
        printf("S\n");
        return;
    }

    else
    {
        printf("N\n");
        return;
    }
}

int main()
{
    // usada no maximo 3

    int creditoA, creditoB, creditoC;

    scanf("%d%d%d", &creditoA, &creditoB, &creditoC);
    viagem(creditoA, creditoB, creditoC);

    return 0;
}