#include <stdio.h>

int main() {
    int num;
    char repetir;
    do {
        printf("Entre com um numero: ");
        scanf("%d", &num);
        int fat = 1;
        for (int i = num; i > 1; i--)
            fat *= i;
        printf("O fatorial de %d e %d\n", num, fat);
        printf("Calcular outro numero (s/n)? ");
        scanf(" %c", &repetir);
    } while (repetir == 's' || repetir == 'S');
    return 0;
}