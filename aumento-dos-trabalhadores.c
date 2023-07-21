#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/368?quizId=8313

int main()
{
    float sal;
    scanf("%f", &sal);
    if (sal >= 500)
    {
        sal = ((sal * 10.0) / 100) + sal;
        printf("%.2f", sal);
    }
    else if (sal >= 300 && sal <= 500)
    {
        sal = ((sal * 7.0) / 100) + sal;
        printf("%.2f", sal);
    }
    else
    {
        sal = ((sal * 5.0) / 100) + sal;
        printf("%.2f", sal);
    }

    return 0;
}
