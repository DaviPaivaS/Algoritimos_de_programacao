#include <stdio.h>
#include <math.h>

int main()
{
    struct coordenadas
    {
        int x1;
        int x2;
        int y1;
        int y2;
    };

    struct coordenadas distancia;

    double pontomX = 0;
    int pontoX = 0;
    double pontomY = 0;
    int pontoY = 0;

    double resultado = 0;

    scanf("%d %d", &distancia.x1, &distancia.x2);

    scanf("%d %d", &distancia.y1, &distancia.y2);

    pontomX = distancia.x1 - distancia.x2;

    pontomY = distancia.y1 - distancia.y2;

    pontoX = pow(pontomX, 2);
    pontoY = pow(pontomY, 2);

    resultado = sqrt(pontoX + pontoY);


    printf("%f", resultado);


    return 0;
}