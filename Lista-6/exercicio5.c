#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h> // Para INT_MIN e INT_MAX

int main() {
    srand(time(NULL));

    int M[4][6];
    int i, j;
    int maior_valor = INT_MIN;
    int menor_valor = INT_MAX;

    printf("\n--- Exercício 5: Maior e Menor Valor da Matriz em C ---\n");
    printf("Matriz 4x6 com valores aleatórios entre -10 e 10:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            M[i][j] = rand() % 21 - 10;
            printf("%4d", M[i][j]);
            if (M[i][j] > maior_valor) {
                maior_valor = M[i][j];
            }
            if (M[i][j] < menor_valor) {
                menor_valor = M[i][j];
            }
        }
        printf("\n");
    }

    printf("\nO maior valor na matriz é: %d\n", maior_valor);
    printf("O menor valor na matriz é: %d\n", menor_valor);

    return 0;
}
