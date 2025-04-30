#include <stdio.h>

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("É par\n");
    else
        printf("É ímpar\n");

    return 0;
}