#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    float notas[10][3];
    int i;

    printf("\n--- Exercício 6: Notas de Alunos e Média em C ---\n");
    printf("Matriz de notas (Grau A, Grau B, Média Parcial):\n");
    printf("Aluno | Grau A | Grau B | Média Parcial\n");
    printf("------|--------|--------|---------------\n");

    for (i = 0; i < 10; i++) {
        notas[i][0] = (float)rand() / RAND_MAX * 10.0; // Grau A entre 0.0 e 10.0
        notas[i][1] = (float)rand() / RAND_MAX * 10.0; // Grau B entre 0.0 e 10.0
        
        // Cálculo da média da Unisinos: (Grau A * 0.3 + Grau B * 0.7) / 1.0
        notas[i][2] = (notas[i][0] * 0.3 + notas[i][1] * 0.7); 

        printf("%5d | %6.2f | %6.2f | %13.2f\n", i + 1, notas[i][0], notas[i][1], notas[i][2]);
    }

    return 0;
}
