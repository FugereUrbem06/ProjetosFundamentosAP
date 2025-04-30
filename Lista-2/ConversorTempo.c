#include <stdio.h>

int main() {
    int minutos, segundos;
    printf("Digite o tempo em minutos: ");
    scanf("%d", &minutos);
    segundos = minutos * 60;
    printf("O tempo equivalente em segundos é: %d segundos\n", segundos);
    return 0;
}