#include <stdio.h>

int main() {
    float cotacao, quantidade_dolares, valor_reais;
    printf("Digite a cotação do dolar para o real: ");
    scanf("%f", &cotacao);
    printf("Digite a quantidade de dólares que deseja comprar: ");
    scanf("%f", &quantidade_dolares);
    valor_reais = cotacao * quantidade_dolares;
    printf("O valor total em reais será: %.2f\n", valor_reais);
    return 0;
}
