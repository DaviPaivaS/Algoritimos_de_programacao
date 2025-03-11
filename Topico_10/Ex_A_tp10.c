#include <stdio.h>
#include <stdlib.h>

double avaliar_polinomio(double *coeficientes, int grau, double x) {
    double resultado = 0.0;
    for (int i = 0; i <= grau; i++) {
        resultado += coeficientes[i] * pow(x, i);
    }
    return resultado;
}

int main() {
    int grau;
    double x;

    scanf("%d", &grau);

    double *coeficientes = (double *)malloc((grau + 1) * sizeof(double));

    for (int i = 0; i <= grau; i++) 
    {

        scanf("%lf", &coeficientes[i]);
    }

    scanf("%lf", &x);

    double resultado = avaliar_polinomio(coeficientes, grau, x);

    printf("%.2lf\n", resultado);

    free(coeficientes);

    return 0;
}
