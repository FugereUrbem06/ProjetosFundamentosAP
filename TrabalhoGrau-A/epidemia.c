#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void menu();
void novaSimulacao();

int main() {
    srand(time(NULL));
    menu();
    return 0;
}

void menu() {
    int opcao;
    do {
        printf("\n--- MENU ---\n");
        printf("1 - Nova Simulacao\n");
        printf("2 - Sair do Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                novaSimulacao();
                break;
            case 2:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while(opcao != 2);
}

void novaSimulacao() {
    int populacao_total, infectados_iniciais, vacinados, dias;
    float taxa_contagio, efetividade;

    printf("\nPopulacao total: ");
    scanf("%d", &populacao_total);

    printf("Numero de pessoas inicialmente infectadas: ");
    scanf("%d", &infectados_iniciais);

    printf("Taxa de contagio (0 a 100%%): ");
    scanf("%f", &taxa_contagio);

    printf("Porcentagem da populacao vacinada (0 a 100%%): ");
    float perc_vacinados;
    scanf("%f", &perc_vacinados);
    vacinados = (int)((perc_vacinados / 100.0) * populacao_total);

    printf("Efetividade da vacina (0 a 100%%): ");
    scanf("%f", &efetividade);

    printf("Numero de dias da simulacao: ");
    scanf("%d", &dias);

    int infectados = infectados_iniciais;
    int vacinados_infectados = 0;

    for(int dia = 1; dia <= dias; dia++) {
        printf("\nDia %d: %d infectados", dia, infectados);

        // Eventos aleatórios
        int evento = rand() % 100 + 1;
        if (evento <= 5) {
            taxa_contagio *= 1.5;
            printf(" (evento: Mutacao mais contagiosa!)");
        } else if (evento <= 10) {
            taxa_contagio *= 0.7;
            printf(" (evento: Midia gera alerta!)");
        } else if (evento <= 20) {
            taxa_contagio *= 0.8;
            printf(" (evento: Isolamento voluntario!)");
        } else if (evento <= 35) {
            taxa_contagio *= 1.25;
            printf(" (evento: Aglomeracao!)");
        }

        // Cálculo dos suscetíveis
        int vacinados_saudaveis = vacinados - vacinados_infectados;
        int nao_vacinados = populacao_total - vacinados - infectados;
        int suscetiveis = nao_vacinados + (int)(vacinados_saudaveis * (1 - (efetividade / 100.0)));

        if(suscetiveis <= 0) {
            printf("\nTodos os suscetiveis foram infectados. Simulacao encerrada.\n");
            break;
        }

        int novos_infectados_estimados = (int)floor(infectados * (taxa_contagio / 100.0));
        int novos_infectados = (novos_infectados_estimados < suscetiveis) ? novos_infectados_estimados : suscetiveis;

        // Atualiza infectados e contagem de vacinados infectados
        int novos_vacinados_infectados = (int)(novos_infectados * ((float)vacinados_saudaveis / (float)suscetiveis) * (1 - (efetividade / 100.0)));
        vacinados_infectados += novos_vacinados_infectados;
        infectados += novos_infectados;

        printf(" (+%d)", novos_infectados);
    }

    int saudaveis = populacao_total - infectados;
    printf("\n\n--- RESULTADOS FINAIS ---\n");
    printf("Total infectados: %d\n", infectados);
    printf("Populacao vacinada: %d\n", vacinados);
    printf("Vacinados infectados: %d\n", vacinados_infectados);
    printf("Populacao saudavel: %d\n", saudaveis);
}
