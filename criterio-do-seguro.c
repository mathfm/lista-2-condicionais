#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/511?quizId=8313

int main()
{
    int gen, idade, seg;
    scanf("%d%d", &gen, &idade);
    if (gen == 1 && idade == 1)
    {
        seg = 0;
        printf("%d", seg);
    }
    else if (gen == 1 && idade == 0)
    {
        seg = 0;
        printf("%d", seg);
    }
    else if (gen == 0 && idade == 1)
    {
        seg = 1;
        printf("%d", seg);
    }
    else if (gen == 0 && idade == 0)
    {
        seg = 0;
        printf("%d", seg);
    }

    return 0;
}