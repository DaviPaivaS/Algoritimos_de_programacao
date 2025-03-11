#include <stdio.h>
#include <math.h>

float IMC(float altura, float peso)
{
    return peso / (altura * altura);
    
}
void fala(float calculo)
{
    printf("seu imc eh %f", calculo);
}

int main()
{
    float peso;
    float altura;
    float calculo;

    scanf("%f", &peso);
    scanf("%f", &altura);

    calculo = IMC(altura, peso);

    fala(calculo);

    return 0;
}