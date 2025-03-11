#include <stdio.h>


void MaiorMenor(int vetor[], int *maior, int *menor, int tamanhoVet)
{
    *maior = vetor[0];
    *menor = vetor[0];

    for(int i = 0; i < tamanhoVet; i++)
    {
        if(vetor[i] > *menor)
        {
            *maior = vetor[i];
        }
        if(vetor[i] < *menor)
        {
            *menor = vetor[i];
        }
    }
}


int main()
{
    int tamanhoVet;
    int maior, menor;

    scanf("%d", &tamanhoVet);

    int vetor[tamanhoVet];

    for(int i = 0; i < tamanhoVet; i++)
    {
        scanf("%d", &vetor[i]);

    }
    MaiorMenor(vetor, &maior, &menor, tamanhoVet);
    printf("maior valor: %d\n", maior);
    printf("menor valor: %d\n", menor);
}