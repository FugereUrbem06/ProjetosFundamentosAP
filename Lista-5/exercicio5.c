#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int consumo_diario[30];
    int i;
    int consumo_total_mes = 0;
    float media_consumo_diario;
    int maior_consumo;
    int menor_consumo;

    printf("\n--- Exercício 5: Consumo de Água Mensal ---\n");

    printf("Consumo diário de água (litros):\n");
    for (i = 0; i < 30; i++) {
        consumo_diario[i] = rand() % (500 - 100 + 1) + 100;
        printf("Dia %2d: %3d litros\n", i + 1, consumo_diario[i]);
        consumo_total_mes += consumo_diario[i];
    }

    printf("\nConsumo total do mês: %d litros\n", consumo_total_mes);

    media_consumo_diario = (float)consumo_total_mes / 30;
    printf("Média de consumo diário: %.2f litros\n", media_consumo_diario);

    maior_consumo = consumo_diario[0];
    menor_consumo = consumo_diario[0];
    for (i = 1; i < 30; i++) {
        if (consumo_diario[i] > maior_consumo) {
            maior_consumo = consumo_diario[i];
        }
        if (consumo_diario[i] < menor_consumo) {
            menor_consumo = consumo_diario[i];
        }
    }

    printf("O(s) dia(s) com o maior consumo (%d litros) foi/foram: ", maior_consumo);
    for (i = 0; i < 30; i++) {
        if (consumo_diario[i] == maior_consumo) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    printf("O(s) dia(s) com o menor consumo (%d litros) foi/foram: ", menor_consumo);
    for (i = 0; i < 30; i++) {
        if (consumo_diario[i] == menor_consumo) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    return 0;
}
