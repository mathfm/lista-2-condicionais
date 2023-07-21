#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// https://www.thehuxley.com/problem/49?quizId=8313

int main()
{
    int equi, iso, esca, md1, md2, md3;
    scanf("%d%d%d", &md1, &md2, &md3);
    if (md1 == md2 && md1 == md3 && md2 == md3)
    {
        printf("equilatero");
    }
    else if (md1 == md2 || md2 == md3 || md1 == md3)
    {
        printf("isosceles");
    }
    else if (md1 != md2 && md2 != md3 && md1 != md3)
    {
        printf("escaleno");
    }
    else
    {
        printf("invalido");
    }

    return 0;
}