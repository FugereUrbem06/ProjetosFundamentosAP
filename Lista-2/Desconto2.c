#include <stdio.h>

int main() {
    int camisetas, calcas, cintos;
    float total, desconto;
    printf("Digite o número de camisetas: ");
    scanf("%d", &camisetas);
    printf("Digite o número de calças: ");
    scanf("%d", &calcas);
    printf("Digite o número de cintos: ");
    scanf("%d", &cintos);
    
    total = (camisetas * 25) + (calcas * 100) + (cintos * 40);
    desconto = total * 0.10; 
    total -= desconto;
    
    printf("O valor do desconto foi: R$ %.2f\n", desconto);
    printf("O valor final da compra é: R$ %.2f\n", total);
    return 0;
}