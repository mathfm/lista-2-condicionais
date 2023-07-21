#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// https://www.thehuxley.com/problem/6?quizId=8313


int main()
{
    double a, b, c, x1, x2, delta;
    scanf("%lf%lf%lf", &a, &b, &c);
    delta = (b * b) - 4 * a * c;
    x1 = (-b + (sqrt(delta))) / (2 * a);
    x2 = (-b - (sqrt(delta))) / (2 * a);
    if (delta < 0)
    {
        printf("NRR");
    }
    else if (a == 0)
    {
        printf("NEESG");
    }
    else if (a >= 0 || b >= 0 || c >= 0)
    {
        printf("%.2lf\n%.2lf", x1, x2);
    }
    else if (delta == 0)
    {
        printf("%d", x1);
    }
    else
    {
        printf("%.2lf\n%.2lf", x1, x2);
    }

    return 0;
}