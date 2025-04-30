#include <stdio.h>

int main() {
    int n;
    char c;
    printf("Entre com um numero: ");
    scanf("%d", &n);
    printf("Entre com um caracter: ");
    scanf(" %c", &c);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", c);
        }
        printf("\n");
    }
    return 0;
}