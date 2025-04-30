#include <stdio.h>

int main() {
    float grauA, grauB, grauC, media;
    char opcao;

    printf("Nota Grau A: ");
    scanf("%f", &grauA);
    printf("Nota Grau B: ");
    scanf("%f", &grauB);

    media = (grauA + grauB) / 2;

    if (media >= 6)
        printf("Aprovado! Média: %.2f\n", media);
    else {
        printf("Recuperação. Substituir Grau A ou B? (a/b): ");
        scanf(" %c", &opcao);
        printf("Nota do Grau C: ");
        scanf("%f", &grauC);

        if (opcao == 'a' || opcao == 'A')
            media = (grauC + grauB) / 2;
        else
            media = (grauA + grauC) / 2;

        if (media >= 6)
            printf("Aprovado na recuperação! Média: %.2f\n", media);
        else
            printf("Reprovado. Média: %.2f\n", media);
    }

    return 0;
}