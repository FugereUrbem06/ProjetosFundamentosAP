#include <stdio.h>

int main() {
    float preco_litro, valor_disponivel, litros;
    printf("Digite o preço do litro da gasolina: ");
    scanf("%f", &preco_litro);
    printf("Digite o valor disponível para abastecer: ");
    scanf("%f", &valor_disponivel);
    litros = valor_disponivel / preco_litro;
    printf("Você pode colocar %.2f litros de gasolina\n", litros);
    return 0;
}