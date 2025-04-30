#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, chute;
    srand(time(NULL));
    numero = (rand() % 10) + 1;

    for (int i = 1; i <= 3; i++) {
        printf("Tentativa %d: ", i);
        scanf("%d", &chute);
        if (chute == numero) {
            printf("Acertou!\n");
            return 0;
        } else if (chute < numero) {
            printf("Muito baixo\n");
        } else {
            printf("Muito alto\n");
        }
    }
    printf("Voce perdeu. O numero era %d\n", numero);
    return 0;
}