#include <stdio.h>

int main() {
    float precoCompra, precoVenda;
    printf("Digite o valor de compra: ");
    scanf("%f", &precoCompra);

    if (precoCompra < 20)
        precoVenda = precoCompra * 1.45;
    else if (precoCompra <= 50)
        precoVenda = precoCompra * 1.35;
    else
        precoVenda = precoCompra * 1.25;

    printf("Valor de venda: R$ %.2f\n", precoVenda);
    return 0;
}