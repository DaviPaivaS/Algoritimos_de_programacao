#include <stdio.h>

int main()
{
    int QuantProd[10];
    float PrecoUnit[10];
    float Soma = 0.0;
    int i;
    int ProdVend = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &QuantProd[i]);
    }

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &PrecoUnit[i]);
    }

    for (i = 0; i < 10; i++)
    {
        ProdVend += QuantProd[i];
        Soma += QuantProd[i] * PrecoUnit[i];
    }

    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", Soma, ProdVend);

    return 0;
}