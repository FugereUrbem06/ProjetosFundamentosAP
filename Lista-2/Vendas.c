#include <stdio.h>

int main() {
    int smartphones, tablets;
    float total;
    printf("Digite o número de smartphones vendidos: ");
    scanf("%d", &smartphones);
    printf("Digite o número de tablets vendidos: ");
    scanf("%d", &tablets);
    total = (smartphones * 1000) + (tablets * 1500);
    printf("O total arrecadado foi: R$ %.2f\n", total);
    return 0;
}