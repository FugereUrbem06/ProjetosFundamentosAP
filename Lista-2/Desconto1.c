#include <stdio.h>

int main() {
    float valor_compra, valor_com_desconto;
    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);
    valor_com_desconto = valor_compra * 0.85; 
    printf("O valor com desconto é: R$ %.2f\n", valor_com_desconto);
    return 0;
}