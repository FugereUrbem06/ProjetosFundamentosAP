#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, sorteio, soma;
    char escolha[6];

    srand(time(NULL));
    printf("Você escolhe PAR ou IMPAR? ");
    scanf("%s", escolha);
    printf("Digite um número de 0 a 5: ");
    scanf("%d", &num);

    sorteio = rand() % 6;
    soma = num + sorteio;

    printf("Você: %d, PC: %d, Soma: %d\n", num, sorteio, soma);

    if ((soma % 2 == 0 && (escolha[0] == 'P' || escolha[0] == 'p')) ||
        (soma % 2 != 0 && (escolha[0] == 'I' || escolha[0] == 'i')))
        printf("Você venceu!\n");
    else
        printf("O programa venceu!\n");

    return 0;
}