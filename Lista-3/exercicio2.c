#include <stdio.h>

int main() {
    int A, B, C;
    printf("Digite A, B e C: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A + B < A + C)
        printf("A + B é menor que A + C\n");
    else
        printf("A + B não é menor que A + C\n");

    return 0;
}