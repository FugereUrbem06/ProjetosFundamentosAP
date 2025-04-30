#include <stdio.h>

int main() {
    int n, num, soma = 0;
    printf("Quantos numeros? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        soma += num;
    }
    printf("Soma: %d\n", soma);
    return 0;
}