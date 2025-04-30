#include <stdio.h>

int main() {
    int num;
    char continuar;
    do {
        printf("Entre com um numero: ");
        scanf("%d", &num);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }
        printf("Calcular outro numero (s/n)? ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');
    return 0;
}