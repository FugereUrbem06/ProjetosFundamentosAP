#include <stdio.h>

int main() {
    int passaros;
    float racao_total;
    printf("Digite o número de pássaros: ");
    scanf("%d", &passaros);
    racao_total = passaros * 30;
    printf("A quantidade total de ração necessária é: %.2f gramas\n", racao_total);
    return 0;
}