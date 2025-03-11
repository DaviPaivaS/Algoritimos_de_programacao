#include <stdio.h>
#include <string.h>

struct tempo {
    int hora;
    int minuto;
    int segundo;
};

struct park {
    char placa[10];
    char marca[10];
    struct tempo entrada;
    struct tempo saida;
};

int main() {
    struct park clientes[5]; // Array de estruturas para armazenar informações de 5 clientes

    for (int i = 0; i < 1; i++) { // Ajuste o valor de 1 para 5 para processar todos os clientes
        printf("Digite a placa e a marca do carro: ");
        scanf("%s %s", clientes[i].placa, clientes[i].marca);

        printf("Digite a hora, minuto e segundo de entrada: ");
        scanf("%d %d %d", &clientes[i].entrada.hora, &clientes[i].entrada.minuto, &clientes[i].entrada.segundo);

        printf("Digite a hora, minuto e segundo de saída: ");
        scanf("%d %d %d", &clientes[i].saida.hora, &clientes[i].saida.minuto, &clientes[i].saida.segundo);
    }

    for (int i = 0; i < 1; i++) { // Ajuste o valor de 1 para 5 para processar todos os clientes
        // Converter tempos de entrada e saída para segundos
        int entradaSegundos = clientes[i].entrada.hora * 3600 + clientes[i].entrada.minuto * 60 + clientes[i].entrada.segundo;
        int saidaSegundos = clientes[i].saida.hora * 3600 + clientes[i].saida.minuto * 60 + clientes[i].saida.segundo;

        // Calcular a permanência em segundos
        int permanenciaSegundos = saidaSegundos - entradaSegundos;

        // Converter a permanência de volta para horas, minutos e segundos
        int horas = permanenciaSegundos / 3600;
        int minutos = (permanenciaSegundos % 3600) / 60;
        int segundos = permanenciaSegundos % 60;

        // Exibir os resultados
        printf("Cliente %d:\n", i + 1);
        printf("Placa: %s\n", clientes[i].placa);
        printf("Marca: %s\n", clientes[i].marca);
        printf("Entrada: %02d:%02d:%02d\n", clientes[i].entrada.hora, clientes[i].entrada.minuto, clientes[i].entrada.segundo);
        printf("Saída: %02d:%02d:%02d\n", clientes[i].saida.hora, clientes[i].saida.minuto, clientes[i].saida.segundo);
        printf("Permanência: %02d:%02d:%02d\n", horas, minutos, segundos);
    }

    return 0;
}
