#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/376?quizId=8313

int main()
{

    int quantLivro;
    int quantAlunos;
    scanf("%d%d", &quantLivro, &quantAlunos);
    int conceito;
    char nota;

    if (quantAlunos <= quantLivro * 8)
        nota = 'A';
    else if (quantAlunos >= quantLivro * 9 && quantAlunos <= quantLivro * 12)
        nota = 'B';
    else if (quantAlunos >= quantLivro * 13 && quantAlunos <= quantLivro * 18)
        nota = 'C';
    else if (quantAlunos > quantLivro * 18)
        nota = 'D';

    printf("%c", nota);

    return 0;
}