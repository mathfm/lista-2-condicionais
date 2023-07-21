#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/1524?quizId=8313
int main()
{

    double salario_antigo;
    scanf("%lf", &salario_antigo);
    double aumento;
    double salario_novo;
    int valorAdicional;
    if (salario_antigo <= 280)
    {
        aumento = salario_antigo * 0.20;
        salario_novo = salario_antigo + aumento;
        valorAdicional = 20;
    }
    else if (salario_antigo > 280 && salario_antigo <= 700)
    {
        aumento = salario_antigo * 0.15;
        salario_novo = salario_antigo + aumento;
        valorAdicional = 15;
    }
    else if (salario_antigo > 700 && salario_antigo < 1500)
    {
        aumento = salario_antigo * 0.10;
        salario_novo = salario_antigo + aumento;
        valorAdicional = 10;
    }
    else if (salario_antigo >= 1500)
    {
        aumento = salario_antigo * 0.05;
        salario_novo = salario_antigo + aumento;
        valorAdicional = 5;
    }

    printf("%.2lf\n%d\n%.2lf\n%.2lf", salario_antigo, valorAdicional, aumento, salario_novo);

    return 0;
}