#include <stdio.h>

int main() {
    float peso, valor;
    printf("Digite o peso do prato (em kg): ");
    scanf("%f", &peso);
    valor = peso * 40;
    printf("O valor a ser pago é: R$ %.2f\n", valor);
    return 0;
}