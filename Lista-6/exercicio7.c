#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int M[5][5];
    int i, j;

    printf("\n--- Exercício 7: Inverter Sinais da Matriz em C ---\n");
    printf("Matriz 5x5 original com valores aleatórios entre -10 e 10:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            M[i][j] = rand() % 21 - 10; // Valores entre -10 e 10
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 5x5 com sinais invertidos:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            M[i][j] = -M[i][j]; // Inverte o sinal
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
