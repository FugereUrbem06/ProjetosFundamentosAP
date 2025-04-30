#include <stdio.h>

int main() {
    int idade;
    float total = 300;

    printf("Idade do conveniado: ");
    scanf("%d", &idade);

    if (idade < 10)
        total += 100;
    else if (idade <= 30)
        total += 220;
    else if (idade <= 60)
        total += 395;
    else
        total += 480;

    printf("Valor do plano: R$ %.2f\n", total);
    return 0;
}