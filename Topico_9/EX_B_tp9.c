#include <stdio.h>
#include <math.h>

float media(float nota1, float nota2, char notac);

int main()
{
    float nota1, nota2, notafinal;
    char notac;
    scanf("%c", &notac);
    scanf("%f %f", &nota1, &nota2);

    notafinal = media(nota1, nota2, notac);

    printf("%.3f\n", notafinal);
    return 0;
}
float media(float nota1, float nota2, char notac)
{
    float notafinal;

    if(notac == 'A')
    {
        notafinal = (nota1 + nota2) / 2;
    }
    if(notac == 'B')
    {
        notafinal = sqrt(nota1 * nota2);
    }
    return notafinal;
}