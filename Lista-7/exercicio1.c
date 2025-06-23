#include <stdio.h>
#include <string.h>

void cumprimentar(char nome[]) {
    printf("Olá, %s!\n", nome);
}

int main() {
    char nome[100];
    printf("--- Exercício 1: Função Cumprimentar em C ---\n");
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;
    cumprimentar(nome);
    return 0;
}
