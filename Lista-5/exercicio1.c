#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int v[10];
    int tamanho_v = 10;

    for (int i = 0; i < tamanho_v; i++) {
        v[i] = rand() % (90 - 10 + 1) + 10;
    }

    printf("--- Exercício 1: Operações com Vetores em C ---\n");

    printf("Vetor original: [");
    for (int i = 0; i < tamanho_v; i++) {
        printf("%d", v[i]);
        if (i < tamanho_v - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    int encontrou_50 = 0;
    for (int i = 0; i < tamanho_v; i++) {
        if (v[i] == 50) {
            encontrou_50 = 1;
            break;
        }
    }
    printf("O valor 50 %s no vetor.\n", encontrou_50 ? "foi encontrado" : "não foi encontrado");

    int ocorrencias_50 = 0;
    for (int i = 0; i < tamanho_v; i++) {
        if (v[i] == 50) {
            ocorrencias_50++;
        }
    }
    printf("O valor 50 ocorreu %d vez(es) no vetor.\n", ocorrencias_50);

    long long soma_media = 0;
    for (int i = 0; i < tamanho_v; i++) {
        soma_media += v[i];
    }
    float media = (float)soma_media / tamanho_v;
    printf("A média dos valores do vetor é: %.2f\n", media);

    int maior_valor = v[0];
    int menor_valor = v[0];
    for (int i = 1; i < tamanho_v; i++) {
        if (v[i] > maior_valor) {
            maior_valor = v[i];
        }
        if (v[i] < menor_valor) {
            menor_valor = v[i];
        }
    }
    printf("O maior valor no vetor é: %d\n", maior_valor);
    printf("O menor valor no vetor é: %d\n", menor_valor);

    long long soma_f = 0;
    long long produto_acumulado = 1;
    for (int i = 0; i < tamanho_v; i++) {
        soma_f += v[i];
        produto_acumulado *= v[i];
    }
    printf("A soma dos valores do vetor é: %lld\n", soma_f);
    printf("O produto acumulado dos valores do vetor é: %lld\n", produto_acumulado);

    printf("Vetor em ordem inversa: [");
    for (int i = tamanho_v - 1; i >= 0; i--) {
        printf("%d", v[i]);
        if (i > 0) {
            printf(", ");
        }
    }
    printf("]\n");

    int v_copia_inversa[10];
    for (int i = 0; i < tamanho_v; i++) {
        v_copia_inversa[i] = v[tamanho_v - 1 - i];
    }
    printf("Cópia do vetor em ordem inversa: [");
    for (int i = 0; i < tamanho_v; i++) {
        printf("%d", v_copia_inversa[i]);
        if (i < tamanho_v - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    int vPares[10];
    int vImpares[10];
    int num_pares = 0;
    int num_impares = 0;

    for (int i = 0; i < tamanho_v; i++) {
        if (v[i] % 2 == 0) {
            vPares[num_pares++] = v[i];
        } else {
            vImpares[num_impares++] = v[i];
        }
    }

    printf("Vetor de números pares (%d elementos): [", num_pares);
    for (int i = 0; i < num_pares; i++) {
        printf("%d", vPares[i]);
        if (i < num_pares - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("Vetor de números ímpares (%d elementos): [", num_impares);
    for (int i = 0; i < num_impares; i++) {
        printf("%d", vImpares[i]);
        if (i < num_impares - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
