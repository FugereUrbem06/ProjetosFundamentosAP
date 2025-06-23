#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int opcao;
    int itensComuns = 0;
    int itensRaros = 0;
    int itensLendarios = 0;
    int sorteioChance;

    printf("\n--- Exercício 6: Sistema de Lootbox em C ---\n");

    do {
        printf("\n--- MENU LOOTBOX ---\n");
        printf("1 - Abrir uma caixa\n");
        printf("2 - Consultar itens coletados\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        while (scanf("%d", &opcao) != 1) {
            printf("Opção inválida. Digite um número: ");
            while (getchar() != '\n');
        }

        switch (opcao) {
            case 1:
                sorteioChance = rand() % 100 + 1; // Sorteia um número de 1 a 100
                if (sorteioChance <= 80) {
                    itensComuns++;
                    printf("Você coletou 1 item comum!\n");
                } else if (sorteioChance <= 99) { // 81 a 99
                    itensRaros++;
                    printf("Você coletou 1 item raro!\n");
                } else { // 100
                    itensLendarios++;
                    printf("Você coletou 1 item lendário!\n");
                }
                break;
            case 2:
                printf("\nItens comuns: %d\n", itensComuns);
                printf("Itens raros: %d\n", itensRaros);
                printf("Itens lendários: %d\n", itensLendarios);
                break;
            case 0:
                printf("Saindo do sistema de lootbox.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
