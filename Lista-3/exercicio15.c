#include <stdio.h>

int main() {
    float preco, total;
    int opcao;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("1 - À vista em dinheiro (15%% desc)\n");
    printf("2 - À vista no cartão (10%% desc)\n");
    printf("3 - Em duas vezes (sem juros)\n");
    printf("4 - Em três vezes (10%% juros)\n");
    printf("Escolha a condição de pagamento: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: total = preco * 0.85; break;
        case 2: total = preco * 0.90; break;
        case 3: total = preco; break;
        case 4: total = preco * 1.10; break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

    printf("Valor a pagar: R$ %.2f\n", total);
    return 0;
}