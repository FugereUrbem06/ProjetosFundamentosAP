#include <stdio.h>

int main() {
    int v1[] = {1, 5, 9, 2, 5};
    int v2[] = {7, 4, 13, 21, 6};
    int v3[] = {8, -3, 5, 7, 12};
    int M[3][5];
    int i, j;

    for (j = 0; j < 5; j++) {
        M[0][j] = v1[j];
        M[1][j] = v2[j];
        M[2][j] = v3[j];
    }

    printf("--- Exercício 1: Cópia de Vetores para Matriz em C ---\n");
    printf("Matriz M:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
