#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
    char nome[150];
    int RA;
    float P1;
    float P2;
};


float calcula_media(float P1, float P2) 
{
    return (P1 + P2) / 2;
}

int main() 
{
    int NumAlunos;

    scanf("%d", &NumAlunos);
    getchar(); 


    struct aluno* alunos = (struct aluno*)malloc(NumAlunos * sizeof(struct aluno));


    for (int i = 0; i < NumAlunos; i++) 
    {

        scanf(" %[^\n]", alunos[i].nome); 
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';


        scanf("%d", &alunos[i].RA);
        

        scanf("%f", &alunos[i].P1);
        scanf("%f", &alunos[i].P2);
        
        getchar();
    }


    for (int i = 0; i < NumAlunos; i++) {
        float media = calcula_media(alunos[i].P1, alunos[i].P2);
        printf("%d\t%s\t%.2f\n", alunos[i].RA, alunos[i].nome, media);
    }


    free(alunos);

    return 0;
}
