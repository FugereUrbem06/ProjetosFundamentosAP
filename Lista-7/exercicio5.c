#include <stdio.h>

float somar(float num1, float num2) {
    return num1 + num2;
}

float subtrair(float num1, float num2) {
    return num1 - num2;
}

float multiplicar(float num1, float num2) {
    return num1 * num2;
}

float dividir(float num1, float num2) {
    return num1 / num2;
}

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("\n--- Exercício 5: Calculadora Simples em C ---\n");

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        while (scanf("%d", &opcao) != 1) {
            printf("Opção inválida. Digite um número: ");
            while (getchar() != '\n');
        }

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro número: ");
            while (scanf("%f", &num1) != 1) {
                printf("Entrada inválida. Digite um número: ");
                while (getchar() != '\n');
            }
            printf("Digite o segundo número: ");
            while (scanf("%f", &num2) != 1) {
                printf("Entrada inválida. Digite um número: ");
                while (getchar() != '\n');
            }

            switch (opcao) {
                case 1:
                    resultado = somar(num1, num2);
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case 2:
                    resultado = subtrair(num1, num2);
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case 3:
                    resultado = multiplicar(num1, num2);
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case 4:
                    if (num2 != 0) {
                        resultado = dividir(num1, num2);
                        printf("Resultado: %.2f\n", resultado);
                    } else {
                        printf("Erro: Divisão por zero não é permitida!\n");
                    }
                    break;
            }
        } else if (opcao != 0) {
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("Calculadora encerrada.\n");
    return 0;
}
