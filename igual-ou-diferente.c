#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// https://www.thehuxley.com/problem/43?quizId=8313


int main()
{
    int n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1 == n2 && n2 == n3)
    {
        printf("\n1\n");
    }
    else if (n1 != n2 && n2 != n3)
    {
        printf("\n2\n");
    }
    else
    {
        printf("\n3\n");
    }
    return 0;
}