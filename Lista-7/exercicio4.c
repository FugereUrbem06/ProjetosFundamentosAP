#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorteio(int inicio, int fim) {
    return rand() % (fim - inicio + 1) + inicio;
}

int main() {
    srand(time(NULL));
    int inicio, fim, numeroSorteado;
    printf("\n--- Exercício 4: Função Sorteio em C ---\n");
    printf("Digite o início do intervalo: ");
    while (scanf("%d", &inicio) != 1) {
        printf("Entrada inválida. Digite um número inteiro: ");
        while (getchar() != '\n');
    }
    printf("Digite o fim do intervalo: ");
    while (scanf("%d", &fim) != 1 || fim < inicio) {
        printf("Entrada inválida. Digite um número inteiro maior ou igual ao início: ");
        while (getchar() != '\n');
    }
    numeroSorteado = sorteio(inicio, fim);
    printf("Número sorteado no intervalo [%d, %d]: %d\n", inicio, fim, numeroSorteado);
    return 0;
}
