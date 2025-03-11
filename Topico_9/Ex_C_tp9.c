#include <stdio.h>
#include <math.h>

float soma(float nmr1, float nmr2);

float subt(float nmr1, float nmr2);

float mult(float nmr1, float nmr2);

float div(float nmr1, float nmr2);

float pot(float nmr1, float nmr2);

int main()
{
    float resultado, nmr1, nmr2;
    char calculo;

    scanf("%f%c%f", &nmr1, &calculo, &nmr2);

    if(calculo == '+')
    {
        resultado = soma(nmr1, nmr2);
    }
    if(calculo == '-')
    {
        resultado = subt(nmr1, nmr2);
    }
    if(calculo == '*')
    {
        resultado = mult(nmr1, nmr2);
    }
    if(calculo == '/')
    {
        resultado = div(nmr1, nmr2);
    }
    if(calculo == '^')
    {
        resultado = pot(nmr1, nmr2);
    }
    printf("%.3f\n", resultado);
    return 0;
}
float soma(float nmr1, float nmr2)
{
    float resultado;

    resultado = nmr1 + nmr2;

    return resultado;
}
float subt(float nmr1, float nmr2)
{
    float resultado;

    resultado = nmr1 - nmr2;

    return resultado;
}
float mult(float nmr1, float nmr2)
{
    float resultado;

    resultado = nmr1 * nmr2;

    return resultado;
}
float div(float nmr1, float nmr2)
{
    float resultado;

    resultado = nmr1 / nmr2;

    return resultado;
}
float pot(float nmr1, float nmr2)
{
    float resultado;

    resultado = pow(nmr1, nmr2);

    return resultado;
}

