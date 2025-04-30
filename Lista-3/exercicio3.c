#include <stdio.h>

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num >= 0)
        printf("Dobro: %d\n", num * 2);
    else
        printf("Triplo: %d\n", num * 3);

    return 0;
}