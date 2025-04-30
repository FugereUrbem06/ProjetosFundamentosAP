#include <stdio.h>

int main() {
    float num, den;
    printf("Digite o numerador: ");
    scanf("%f", &num);
    printf("Digite o denominador: ");
    scanf("%f", &den);

    if (den != 0)
        printf("Resultado: %.2f\n", num / den);
    else
        printf("Erro: Divisão por zero!\n");

    return 0;
}