#include <stdio.h>
#include "personagem.h"
#include "combate.h"
#include "utils.h"

int main() {
    inicializarGeradorAleatorio();

    Personagem time1[TAMANHO_EQUIPE];
    Personagem time2[TAMANHO_EQUIPE];

    printf("--- INICIALIZANDO TIMES ---\n");
    printf("Time 1:\n");
    inicializarEquipe(time1);
    printf("Time 2:\n");
    inicializarEquipe(time2);
    printf("--------------------------\n\n");

    printf(">>> Estado Inicial:\n");
    imprimirEstadoEquipes(time1, time2);

    int timeAtual = sortearTimeInicial();
    printf("O Time %d comeca a batalha!\n\n", timeAtual);

    int rodada = 1;
    int resultadoBatalha = 0;

    while (resultadoBatalha == 0) {
        printf(">>> Rodada %d:\n", rodada);

        Personagem *atacante, *alvo;
        int indiceAtacante, indiceAlvo;
        int vidaAnteriorAlvo;

        if (timeAtual == 1) {
            indiceAtacante = selecionarAtacante(time1);
            if (indiceAtacante == -1) {
                resultadoBatalha = 2;
                break;
            }
            atacante = &time1[indiceAtacante];

            indiceAlvo = selecionarAlvo(time2);
            if (indiceAlvo == -1) {
                resultadoBatalha = 1;
                break;
            }
            alvo = &time2[indiceAlvo];

            printf("Time 1 %s (Vida: %d) ataca %s do Time 2 (Vida: %d)\n",
                   atacante->nome_classe, atacante->vida, alvo->nome_classe, alvo->vida);

        } else {
            indiceAtacante = selecionarAtacante(time2);
            if (indiceAtacante == -1) {
                resultadoBatalha = 1;
                break;
            }
            atacante = &time2[indiceAtacante];

            indiceAlvo = selecionarAlvo(time1);
            if (indiceAlvo == -1) {
                resultadoBatalha = 2;
                break;
            }
            alvo = &time1[indiceAlvo];

            printf("Time 2 %s (Vida: %d) ataca %s do Time 1 (Vida: %d)\n",
                   atacante->nome_classe, atacante->vida, alvo->nome_classe, alvo->vida);
        }

        vidaAnteriorAlvo = alvo->vida;

        realizarAtaque(atacante, alvo, vidaAnteriorAlvo);

        printf("\n>>> Estado Atual:\n");
        imprimirEstadoEquipes(time1, time2);

        resultadoBatalha = verificarFimDeJogo(time1, time2);

        if (resultadoBatalha == 0) {
            timeAtual = (timeAtual == 1) ? 2 : 1;
        }
        rodada++;
    }

    apresentarVencedor(resultadoBatalha);

    return 0;
}
