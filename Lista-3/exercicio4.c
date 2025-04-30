#include <stdio.h>

int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num % 3 == 0)
        printf("É divisível por 3\n");
    else
        printf("Não é divisível por 3\n");

    return 0;
}