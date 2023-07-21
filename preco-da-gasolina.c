#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/1532?quizId=8313
int main()
{
    double preco, n1;
    char i;
    scanf("%lf\n%c", &n1, &i);

    if (i == 'A')
    {
        if (n1 > 0 && n1 <= 20)
        {
            preco = (n1 * 1.90 * 0.97);
        }
        if (n1 > 20)
        {
            preco = (n1 * 1.90 * 0.95);
        }
        printf("R$ %.2lf", preco);
    }

    if (i == 'G')
    {
        if (n1 > 0 && n1 <= 20)
        {
            preco = (n1 * 2.50 * 0.96);
        }
        if (n1 > 20)
        {
            preco = (n1 * 2.50 * 0.94);
        }
        printf("R$ %.2lf", preco);
    }

    if (i == 'D')
    {
        if (n1 > 0 && n1 <= 25)
        {
            preco = (n1 * 1.66);
        }
        if (n1 >= 25)
        {
            preco = (n1 * 1.66 * 0.96);
        }
        printf("R$ %.2lf", preco);
    }

    return 0;
}