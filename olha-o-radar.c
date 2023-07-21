#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*/
Velocidade at� 20% superior ao permitido: multa de R$ 85.13 e 4 pontos na carteira;
Velocidade maior que 20% e at� 50% acima do permitido: multa de R$ 127.69 e 5 pontos na carteira;
Velocidade acima de 50% do permitido: multa de R$ 574.62 , 7 pontos na carteira, apreens�o da carteira e suspens�o do direito de dirigir.

    https://www.thehuxley.com/problem/564?quizId=8313
/*/
int main()
{

    double veloPista, carro, multa;
    int pontosCarteira;
    scanf("%lf%lf", &veloPista, &carro);
    if (carro == veloPista + (veloPista * 0.20))
    {
        multa = 85.13;
        pontosCarteira = 4;
    }
    else if (carro > veloPista + (veloPista * 0.20) && carro <= veloPista + (veloPista * 0.50))
    {
        multa = 127.69;
        pontosCarteira = 5;
    }

    else if (carro > veloPista + (veloPista * 0.50))
    {
        multa = 574.62;
        pontosCarteira = 7;
    }
    else
    {
        multa = 0;
        pontosCarteira = 0;
    }

    printf("%.2lf\n%d", multa, pontosCarteira);

    return 0;
}