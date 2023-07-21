#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
    Você deve ajudar seu professor a descobrir qual a situação dos alunos de uma turma. Faça um programa que recebe como entrada 3 notas do usuário, calcula a média do aluno naquele semestre e, em seguida, informa a situação do aluno:
    "Aprovado", se a média estiver no intervalo [70; 100]
    "Reprovado", se a média estiver no intervalo [0; 40]
    "Final", se a média estiver no intervalo (40; 70).
    "Média inválida" em qualquer outro caso.
*/

int main()
{
    int notaA, notaB, notaC;
    double mediaDoAluno, total;

    scanf("%d %d %d", &notaA, &notaB, &notaC);
    total = (notaA + notaB + notaC);
    mediaDoAluno = total / 3;
    
    if (mediaDoAluno >= 70.00 && mediaDoAluno <= 100)
        printf("\nA media do aluno foi %.2lf e ele foi APROVADO ", mediaDoAluno);

    else if (mediaDoAluno > 0 && mediaDoAluno <= 40.00)
        printf("\nA media do aluno foi %.2lf e ele foi REPROVADO ", mediaDoAluno);

    else if (mediaDoAluno > 40.00 && mediaDoAluno <= 70.00)
        printf("\nA media do aluno foi %.2lf e ele foi FINAL ", mediaDoAluno);

    else
        printf("\nMedia invalida ");
    
    return 0;
}