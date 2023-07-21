#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/691?quizId=8313

int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    if (n1 > n2)
    {
        printf("%d %d", n2, n1);
    }
    else
    {
        printf("%d %d", n1, n2);
    }
    return 0;
}