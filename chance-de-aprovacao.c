#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/1123?quizId=8313

int main()
{

    int atividades_passadas, resolvidas;
    scanf("%d%d", &atividades_passadas, &resolvidas);
    double aprovacao;
    double atividades_feitas = (resolvidas * 100.00) / atividades_passadas;

    if (atividades_feitas < 20)
    {
        aprovacao = 4.40;
        printf("%.2lf%% %.2lf%% Pessimo", atividades_feitas, aprovacao);
    }

    else if (atividades_feitas >= 20 && atividades_feitas < 40)
    {
        aprovacao = 31.65;
        printf("%.2lf%% %.2lf%% Ruim", atividades_feitas, aprovacao);
    }
    else if (atividades_feitas >= 40 && atividades_feitas < 60)
    {
        aprovacao = 56.82;
        printf("%.2lf%% %.2lf%% Bom", atividades_feitas, aprovacao);
    }

    else if (atividades_feitas >= 60 && atividades_feitas < 80)
    {
        aprovacao = 80.00;
        printf("%.2lf%% %.2lf%% Muito Bom", atividades_feitas, aprovacao);
    }

    else if (atividades_feitas >= 80)
    {
        aprovacao = 94.00;
        printf("%.2lf%% %.2lf%% Excelente", atividades_feitas, aprovacao);
    }

    return 0;
}