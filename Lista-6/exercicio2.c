#include <stdio.h>

int main() {
    int M[3][5] = {
        {1, 5, 9, 2, 5},
        {7, 4, 13, 21, 6},
        {8, -3, 5, 7, 12}
    };
    int escalar = 7;
    int i, j;

    printf("\n--- Exercício 2: Multiplicação de Matriz por Escalar em C ---\n");
    printf("Matriz M original:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz M multiplicada por %d:\n", escalar);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            M[i][j] *= escalar;
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
