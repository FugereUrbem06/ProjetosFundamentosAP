#include <stdio.h>

float mediaUnisinos(float grauA, float grauB) {
    return (grauA * 0.3 + grauB * 0.7);
}

int main() {
    float notaA, notaB, mediaFinal;
    printf("\n--- Exercício 3: Função Média Unisinos em C ---\n");
    printf("Digite a nota do Grau A: ");
    while (scanf("%f", &notaA) != 1) {
        printf("Entrada inválida. Digite um número: ");
        while (getchar() != '\n');
    }
    printf("Digite a nota do Grau B: ");
    while (scanf("%f", &notaB) != 1) {
        printf("Entrada inválida. Digite um número: ");
        while (getchar() != '\n');
    }
    mediaFinal = mediaUnisinos(notaA, notaB);
    printf("O resultado do grau final é: %.2f\n", mediaFinal);
    return 0;
}
