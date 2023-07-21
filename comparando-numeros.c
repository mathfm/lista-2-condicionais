#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// https://www.thehuxley.com/problem/509?quizId=8313
int main()
{
    int x, y, z, a, b, c, e, f;
    scanf("%d%d", &x, &y);
    if (x > y) // exemplo 1 x maior q y
    {
        z = 1;
        printf("\n%d", z);
    }
    else
    {
        z = 0;
        printf("\n%d", z);
    }

    if (x == y) // exemplo 2 x = a y
    {
        a = 1;
        printf("\n%d", a);
    }
    else
    {
        a = 0;
        printf("\n%d", a);
    }

    if (x < y) // exemplo 3 x menor q y
    {
        b = 1;
        printf("\n%d", b);
    }
    else
    {
        b = 0;
        printf("\n%d", b);
    }

    if (x != y) // exemplo 4 x diferente de y
    {
        c = 1;
        printf("\n%d", c);
    }
    else
    {
        c = 0;
        printf("\n%d", c);
    }

    if (x >= y || x == y) // exemplo 5 x maior ou igual a y
    {
        e = 1;
        printf("\n%d", e);
    }
    else
    {
        e = 0;
        printf("\n%d", e);
    }

    if (x <= y || x == y) // exemplo 6 x menor ou igual a y
    {
        f = 1;
        printf("\n%d", f);
    }
    else
    {
        f = 0;
        printf("\n%d", f);
    }

    return 0;
}
