#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][50], menor[50];
    for (int i = 0; i < 5; i++) {
        printf("Nome %d: ", i + 1);
        scanf("%s", nomes[i]);
        if (i == 0 || strcmp(nomes[i], menor) < 0)
            strcpy(menor, nomes[i]);
    }
    printf("Primeiro em ordem alfabetica: %s\n", menor);
    return 0;
}