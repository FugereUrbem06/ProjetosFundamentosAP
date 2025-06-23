#include <stdio.h>

void tabuada(int numero) {
    int i;
    printf("Tabuada do %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main() {
    int num;
    printf("\n--- Exercício 2: Função Tabuada em C ---\n");
    printf("Digite um número inteiro para ver a tabuada: ");
    while (scanf("%d", &num) != 1) {
        printf("Entrada inválida. Digite um número inteiro: ");
        while (getchar() != '\n');
    }
    tabuada(num);
    return 0;
}
