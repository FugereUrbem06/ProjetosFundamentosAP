#include <stdio.h>

int main() {
    float cotDolar, cotEuro, valor;
    int opcao;

    printf("Cotação do Dólar: ");
    scanf("%f", &cotDolar);
    printf("Cotação do Euro: ");
    scanf("%f", &cotEuro);

    printf("1) Real -> Euro\n2) Real -> Dólar\n3) Euro -> Dólar\n");
    printf("4) Euro -> Real\n5) Dólar -> Euro\n6) Dólar -> Real\n");
    printf("Escolha a opção: ");
    scanf("%d", &opcao);
    printf("Valor a converter: ");
    scanf("%f", &valor);

    switch (opcao) {
        case 1: printf("Resultado: %.2f EUR\n", valor / cotEuro); break;
        case 2: printf("Resultado: %.2f USD\n", valor / cotDolar); break;
        case 3: printf("Resultado: %.2f USD\n", (valor * cotEuro) / cotDolar); break;
        case 4: printf("Resultado: %.2f BRL\n", valor * cotEuro); break;
        case 5: printf("Resultado: %.2f EUR\n", (valor * cotDolar) / cotEuro); break;
        case 6: printf("Resultado: %.2f BRL\n", valor * cotDolar); break;
        default: printf("Opção inválida.\n");
    }

    return 0;
}