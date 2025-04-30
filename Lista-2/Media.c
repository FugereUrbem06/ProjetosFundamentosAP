#include <stdio.h>

int main() {
    float grauA, grauB, media;
    printf("Digite a nota do grau A: ");
    scanf("%f", &grauA);
    printf("Digite a nota do grau B: ");
    scanf("%f", &grauB);
    media = (grauA / 3) + (grauB * 2 / 3);
    printf("A média final é: %.2f\n", media);
    return 0;
}