#include <stdio.h>

int main() {
    float salario, desconto;
    printf("Digite o salário: ");
    scanf("%f", &salario);

    desconto = salario * 0.11;
    if (desconto > 318.20)
        desconto = 318.20;

    printf("Desconto: R$ %.2f\n", desconto);
    return 0;
}