#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /*/
    a quantidade de produtos comprados for igual ou maior que quinze, ent�o o desconto � concedido
    O desconto tamb�m � concedido caso o valor total da compra seja maior ou igual a 40 reais.
    O valor do desconto � de 15%.

    https://www.thehuxley.com/problem/51?quizId=8313
    /*/
    int codigo, quantidade;
    double valorTotal, valorProduto, desconto;
    scanf("%d%d", &codigo, &quantidade);
    if (codigo == 1)
    {
        valorTotal = quantidade * 5.30;
        if (quantidade >= 15 || valorTotal >= 40)
        {
            desconto = (valorTotal * 15) / 100;
            valorTotal -= desconto;
        }
    }
    else if (codigo == 2)
    {
        valorTotal = quantidade * 6;
        if (quantidade >= 15 || valorTotal >= 40)
        {
            desconto = (valorTotal * 15) / 100;
            valorTotal -= desconto;
        }
    }
    else if (codigo == 3)
    {
        valorTotal = quantidade * 3.20;
        if (quantidade >= 15 || valorTotal >= 40)
        {
            desconto = (valorTotal * 15) / 100;
            valorTotal -= desconto;
        }
    }
    else if (codigo == 4)
    {
        valorTotal = quantidade * 2.50;
        if (quantidade >= 15 || valorTotal >= 40)
        {
            desconto = (valorTotal * 15) / 100;
            valorTotal -= desconto;
        }
    }
    printf("R$ %.2lf", valorTotal);

    return 0;
}