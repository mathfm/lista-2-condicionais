#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.thehuxley.com/problem/174?quizId=8313

int faixaPreco(int valor)
{
    int taxaBasica = 7;
    int mediaBaixa = 1;
    int mediaAlta = 2;
    int alta = 5;

    if (valor <= 10)
        return taxaBasica;

    if (valor >= 11 && valor <= 30)
    {
        mediaBaixa = mediaBaixa * (valor - 10);
        return mediaBaixa + taxaBasica;
    }
    if (valor >= 31 && valor <= 100)
    {
        mediaAlta = mediaAlta * (valor - 20);
        return taxaBasica + mediaAlta;
    }
    if (valor >= 101)
    {
        alta = alta * (valor - 100);
        return 7 + 20 + 140 + alta;
    }
}

int main(int argc, char const *argv[])
{
    int valorConsumo;
    scanf("%d", &valorConsumo);
    printf("%d\n", faixaPreco(valorConsumo));

    return 0;
}
