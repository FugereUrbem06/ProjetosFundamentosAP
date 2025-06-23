#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int N;

    printf("\n--- Exercício 3: Testar Dado Viciado ---\n");

    while (1) {
        printf("Digite o número de lançamentos do dado (N): ");
        if (scanf("%d", &N) == 1 && N > 0) {
            break;
        } else {
            printf("Entrada inválida. Por favor, digite um número inteiro positivo.\n");
            while (getchar() != '\n');
        }
    }

    int contagem_faces[6] = {0};

    for (int i = 0; i < N; i++) {
        int face = rand() % 6 + 1;
        contagem_faces[face - 1]++;
    }

    printf("\nResultados:\n");
    for (int i = 0; i < 6; i++) {
        int face = i + 1;
        int ocorrencias = contagem_faces[i];
        float percentual = ((float)ocorrencias / N) * 100.0;
        printf("Face %d: %d ocorrências (%.2f%%)\n", face, ocorrencias, percentual);
    }

    return 0;
}
