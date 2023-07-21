#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/510?quizId=8313

int main()
{
    int ent1, ent2, pag;
    scanf("%d%d", &ent1, &ent2);
    if (ent1 == 1 && ent2 == 1)
    {
        pag = 1;
        printf("%d", pag);
    }
    else if (ent1 == 1 && ent2 == 0)
    {
        pag = 1;
        printf("%d", pag);
    }
    else if (ent1 == 0 && ent2 == 1)
    {
        pag = 1;
        printf("%d", pag);
    }
    else if (ent1 == 0 && ent1 == 0)
    {
        pag = 0;
        printf("%d", pag);
    }
    return 0;
}