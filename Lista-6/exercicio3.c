#include <stdio.h>

void gerarMatrizIdentidade(int tamanho) {
    int i, j;
    printf("\n--- Exercício 3: Matriz Identidade em C ---\n");
    printf("Matriz Identidade %dx%d:\n", tamanho, tamanho);
    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            if (i == j) {
                printf("%d ", 1);
            } else {
                printf("%d ", 0);
            }
        }
        printf("\n");
    }
}

int main() {
    gerarMatrizIdentidade(4);
    return 0;
}
