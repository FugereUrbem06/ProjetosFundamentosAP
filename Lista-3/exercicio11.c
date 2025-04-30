#include <stdio.h>

int main() {
    int valor, notas;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    int cedulas[] = {100, 50, 20, 10, 5, 1};

    for (int i = 0; i < 6; i++) {
        notas = valor / cedulas[i];
        if (notas > 0) {
            printf("%d nota(s) de R$ %d\n", notas, cedulas[i]);
            valor %= cedulas[i];
        }
    }

    return 0;
}