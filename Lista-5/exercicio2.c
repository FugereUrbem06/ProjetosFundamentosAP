#include <stdio.h>

int main() {
    float vetor[5];
    int i;

    printf("\n--- Exercício 2: Multiplicação por Posição ---\n");

    printf("Por favor, digite 5 valores para o vetor:\n");
    for (i = 0; i < 5; i++) {
        while (1) {
            printf("Digite o valor para a posição %d: ", i);
            if (scanf("%f", &vetor[i]) == 1) {
                break;
            } else {
                printf("Entrada inválida. Por favor, digite um número.\n");
                while (getchar() != '\n');
            }
        }
    }

    printf("Vetor inserido: [");
    for (i = 0; i < 5; i++) {
        printf("%.2f", vetor[i]);
        if (i < 4) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("Resultado da multiplicação de cada valor pela sua posição:\n");
    for (i = 0; i < 5; i++) {
        float resultado = vetor[i] * i;
        printf("Posição %d (%.2f * %d) = %.2f\n", i, vetor[i], i, resultado);
    }

    return 0;
}
