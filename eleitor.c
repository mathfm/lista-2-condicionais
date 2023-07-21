#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// https://www.thehuxley.com/problem/42?quizId=8313


int main()
{
    int n1, n2;
    n2 = 16 || 18;
    scanf("%d", &n1);
    if (n1 < 16)
    {
        printf("nao eleitor");
    }
    else if (n1 >= 18 && n1 <= 65)
    {
        printf("eleitor obrigatorio");
    }
    else if (n1 >= n2 || n1 > 65)
    {
        printf("eleitor facultativo");
    }
    else
    {
        printf("eleitor invalido");
    }

    return 0;
}