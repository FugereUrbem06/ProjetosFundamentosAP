#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int M[4][6];
    int i, j;
    long long soma_segunda_linha = 0;
    long long soma_quinta_coluna = 0;
    long long produto_primeira_quarta_linha = 0;
    long long soma_colunas_pares = 0;
    long long soma_linhas_impares = 0;

    printf("\n--- Exercício 4: Matriz Aleatória e Somas em C ---\n");
    printf("Matriz 4x6 com valores aleatórios entre -10 e 10:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            M[i][j] = rand() % 21 - 10; // Valores entre -10 e 10
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }

    for (j = 0; j < 6; j++) {
        soma_segunda_linha += M[1][j]; // Segunda linha (índice 1)
    }
    printf("\na. Soma dos elementos da segunda linha: %lld\n", soma_segunda_linha);

    for (i = 0; i < 4; i++) {
        soma_quinta_coluna += M[i][4]; // Quinta coluna (índice 4)
    }
    printf("b. Soma dos elementos da quinta coluna: %lld\n", soma_quinta_coluna);

    for (j = 0; j < 6; j++) {
        produto_primeira_quarta_linha += M[0][j] * M[3][j]; // Primeira linha (0) * Quarta linha (3)
    }
    printf("c. Soma da multiplicação dos elementos da primeira linha pelos elementos da quarta linha: %lld\n", produto_primeira_quarta_linha);

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            if (j % 2 == 0) { // Índices de colunas pares (0, 2, 4)
                soma_colunas_pares += M[i][j];
            }
        }
    }
    printf("d. Soma dos elementos só das colunas com índices pares: %lld\n", soma_colunas_pares);

    for (i = 0; i < 4; i++) {
        if (i % 2 != 0) { // Índices de linhas ímpares (1, 3)
            for (j = 0; j < 6; j++) {
                soma_linhas_impares += M[i][j];
            }
        }
    }
    printf("e. Soma dos elementos só das linhas com índices ímpares: %lld\n", soma_linhas_impares);

    return 0;
}
