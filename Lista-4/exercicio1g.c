#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, positivos = 0, negativos = 0;
    srand(time(NULL));
    for (int i = 0; i < 20; i++) {
        num = (rand() % 21) - 10;
        printf("%d - ", num);
        if (num > 0) {
            printf("POSITIVO\n");
            positivos++;
        } else if (num < 0) {
            printf("NEGATIVO\n");
            negativos++;
        } else {
            printf("NULO\n");
        }
    }
    printf("Total positivos: %d\n", positivos);
    printf("Total negativos: %d\n", negativos);
    return 0;
}