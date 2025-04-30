#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nums[5], menor, maior, soma = 0;
    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        nums[i] = rand() % 101;
        printf("Numero %d: %d\n", i + 1, nums[i]);
        soma += nums[i];
        if (i == 0) {
            menor = maior = nums[i];
        } else {
            if (nums[i] < menor) menor = nums[i];
            if (nums[i] > maior) maior = nums[i];
        }
    }
    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);
    printf("Media: %.2f\n", soma / 5.0);
    return 0;
}