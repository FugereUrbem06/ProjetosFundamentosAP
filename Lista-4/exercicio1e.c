#include <stdio.h>

int main() {
    int num, soma = 0;
    for (int i = 0; i < 15; i++) {
        scanf("%d", &num);
        soma += num;
    }
    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", soma / 15.0);
    return 0;
}