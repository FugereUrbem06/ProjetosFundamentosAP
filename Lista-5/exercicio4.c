#include <stdio.h>

int main() {
    char *dias_semana[] = {"Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado"};
    int passos_por_dia[7];
    int i;
    int total_passos = 0;
    float media_diaria;
    int meta = 10000;

    printf("\n--- Exercício 4: Monitoramento de Passos ---\n");

    printf("Por favor, digite o número de passos para cada dia da semana:\n");
    for (i = 0; i < 7; i++) {
        while (1) {
            printf("Passos em %s: ", dias_semana[i]);
            if (scanf("%d", &passos_por_dia[i]) == 1 && passos_por_dia[i] >= 0) {
                break;
            } else {
                printf("Entrada inválida. Por favor, digite um número inteiro não negativo.\n");
                while (getchar() != '\n');
            }
        }
        total_passos += passos_por_dia[i];
    }

    printf("\nTotal de passos na semana: %d\n", total_passos);

    media_diaria = (float)total_passos / 7;
    printf("Média diária de passos: %.2f\n", media_diaria);

    int meta_alcancada_algum_dia = 0;
    for (i = 0; i < 7; i++) {
        if (passos_por_dia[i] >= meta) {
            meta_alcancada_algum_dia = 1;
            break;
        }
    }

    if (meta_alcancada_algum_dia) {
        printf("Parabéns! A meta de %d passos foi alcançada nos seguintes dias: ", meta);
        for (i = 0; i < 7; i++) {
            if (passos_por_dia[i] >= meta) {
                printf("%s", dias_semana[i]);
                if (i < 6) {
                    int j;
                    for (j = i + 1; j < 7; j++) {
                        if (passos_por_dia[j] >= meta) {
                            printf(", ");
                            break;
                        }
                    }
                }
            }
        }
        printf("\n");
    } else {
        printf("A meta de %d passos não foi alcançada em nenhum dia esta semana.\n", meta);
    }

    return 0;
}
