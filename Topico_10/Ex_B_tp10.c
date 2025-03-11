#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas;
    int **matriz;

    scanf("%d %d", &linhas, &colunas);

    matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int ehSimetrica = (linhas == colunas);
    for (int i = 0; ehSimetrica && i < linhas; i++) {
        for (int j = 0; j < i; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                ehSimetrica = 0;
                break;
            }
        }
    }

    if (ehSimetrica) {
        printf("Eh simetrica\n");
    } else {
        printf("Nao eh simetrica\n");
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
