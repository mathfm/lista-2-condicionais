#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/1169?quizId=8313

int main()
{

    int level;
    int choque;
    scanf("%d", &level);

    if (level <= 20)
    {
        choque = 20 + (pow(level, 3));
    }
    else if (level > 20 && level <= 40)
    {
        choque = 8000 + (pow(level - 10, 2));
    }
    else if (level > 40 && level <= 60)
    {
        choque = 9000 + (5 * level);
    }
    else if (level > 60 && level <= 80)
    {
        choque = 9300 + (2 * level);
    }
    else if (level > 80 && level <= 100)
    {
        choque = 9500 + level;
    }

    printf("Potencia de : %d W", choque);

    return 0;
}