#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/1121?quizId=8313

int main()
{
    double salario;
    double rendaComprometida;
    double limite = 0;
    scanf("%lf%lf", &salario, &rendaComprometida);

    if (rendaComprometida <= salario * 0.3)
        limite = (salario * 0.3) - rendaComprometida;

    printf("%.2lf\n", limite);

    return 0;
}
