#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int num_jogadores = 4;
    int num_rodadas = 5;
    int pontuacao_acumulada[4] = {0};
    int i, rodada;
    int pontos_jogador;
    int rodada_destaque;

    printf("\n--- Exercício 6: Jogo de Pontuação ---\n");

    printf("Pontuação inicial dos jogadores: [0, 0, 0, 0]\n");

    for (rodada = 1; rodada <= num_rodadas; rodada++) {
        printf("\n--- Rodada %d ---\n", rodada);
        rodada_destaque = 0;

        for (i = 0; i < num_jogadores; i++) {
            pontos_jogador = rand() % 101;
            pontuacao_acumulada[i] += pontos_jogador;
            printf("Jogador %d fez %d pontos nesta rodada. Pontuação acumulada: %d\n", i + 1, pontos_jogador, pontuacao_acumulada[i]);

            if (pontos_jogador > 80) {
                printf("*** Rodada de Destaque para o Jogador %d! ***\n", i + 1);
                rodada_destaque = 1;
            }
        }
        if (!rodada_destaque) {
            printf("Nenhum jogador alcançou destaque nesta rodada.\n");
        }
    }

    printf("\n--- Fim do Jogo ---\n");

    printf("Pontuação total de cada jogador:\n");
    for (i = 0; i < num_jogadores; i++) {
        printf("Jogador %d: %d pontos\n", i + 1, pontuacao_acumulada[i]);
    }

    int max_pontuacao = pontuacao_acumulada[0];
    for (i = 1; i < num_jogadores; i++) {
        if (pontuacao_acumulada[i] > max_pontuacao) {
            max_pontuacao = pontuacao_acumulada[i];
        }
    }

    int vencedores_count = 0;
    int vencedores[4];
    for (i = 0; i < num_jogadores; i++) {
        if (pontuacao_acumulada[i] == max_pontuacao) {
            vencedores[vencedores_count++] = i + 1;
        }
    }

    if (vencedores_count == 1) {
        printf("\nO vencedor é o Jogador %d com %d pontos!\n", vencedores[0], max_pontuacao);
    } else {
        printf("\nHouve um empate entre os jogadores ");
        for (i = 0; i < vencedores_count; i++) {
            printf("%d", vencedores[i]);
            if (i < vencedores_count - 1) {
                printf(", ");
            }
        }
        printf(" com %d pontos!\n", max_pontuacao);
    }

    return 0;
}
