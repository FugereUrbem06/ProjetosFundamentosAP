#include <stdio.h>

int main() {
    int x;
    float notaA, notaB, notaC, media, somaMedias = 0;
    char substituir;

    printf("Quantos alunos? ");
    scanf("%d", &x);

    for (int i = 0; i < x; i++) {
        printf("Nota A: ");
        scanf("%f", &notaA);
        printf("Nota B: ");
        scanf("%f", &notaB);

        media = (notaA + notaB) / 2;
        if (media >= 6.0) {
            printf("APROVADO\n");
        } else {
            printf("Nota C: ");
            scanf("%f", &notaC);
            printf("Substituir qual nota (A ou B)? ");
            scanf(" %c", &substituir);
            if (substituir == 'A' || substituir == 'a') notaA = notaC;
            else notaB = notaC;
            media = (notaA + notaB) / 2;
            if (media >= 6.0)
                printf("APROVADO\n");
            else
                printf("REPROVADO\n");
        }
        somaMedias += media;
    }
    printf("Media geral: %.2f\n", somaMedias / x);
    return 0;
}