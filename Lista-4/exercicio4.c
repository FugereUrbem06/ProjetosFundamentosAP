#include <stdio.h>

int main() {
    int divisor, inicio, fim;
    printf("Entre com o valor do divisor: ");
    scanf("%d", &divisor);
    printf("Inicio do intervalo: ");
    scanf("%d", &inicio);
    printf("Final do intervalo: ");
    scanf("%d", &fim);

    printf("Numeros divisiveis por %d no intervalo de %d a %d:\n", divisor, inicio, fim);
    for (int i = inicio; i <= fim; i++) {
        if (i % divisor == 0)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}