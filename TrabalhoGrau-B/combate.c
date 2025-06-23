#include "combate.h"
#include "utils.h"
#include <stdio.h>
#include <math.h>

void inicializarEquipe(Personagem equipe[]) {
    for (int i = 0; i < TAMANHO_EQUIPE; i++) {
        Classe classe_sorteada = (Classe)gerarNumeroAleatorio(0, NUM_CLASSES - 1);
        inicializarPersonagem(&equipe[i], i, classe_sorteada);
    }
}

int sortearTimeInicial() {
    return gerarNumeroAleatorio(1, 2);
}

int selecionarAtacante(Personagem equipe[]) {
    int melhorAtacanteIndex = -1;
    double maiorRazao = -1.0;

    for (int i = 0; i < TAMANHO_EQUIPE; i++) {
        if (equipe[i].vivo) {
            double razao = (equipe[i].ataque > 0) ? (double)equipe[i].vida / equipe[i].ataque : (double)equipe[i].vida;

            if (razao > maiorRazao) {
                maiorRazao = razao;
                melhorAtacanteIndex = i;
            }
        }
    }
    return melhorAtacanteIndex;
}

int selecionarAlvo(Personagem equipeAdversaria[]) {
    int alvosVivos[TAMANHO_EQUIPE];
    int numAlvosVivos = 0;

    for (int i = 0; i < TAMANHO_EQUIPE; i++) {
        if (equipeAdversaria[i].vivo) {
            alvosVivos[numAlvosVivos++] = i;
        }
    }

    if (numAlvosVivos == 0) {
        return -1;
    }

    int indiceSorteado = gerarNumeroAleatorio(0, numAlvosVivos - 1);
    return alvosVivos[indiceSorteado];
}

int calcularDano(const Personagem *atacante, const Personagem *defensor) {
    int danoBase = atacante->ataque - defensor->defesa;
    if (danoBase < 0) {
        danoBase = 0;
    }

    if (atacante->classe_id == GUERREIRO && chanceSucesso(20)) {
        printf("  -> Habilidade especial do Guerreiro ativada: Golpe Critico (dano dobrado)!\n");
        danoBase *= 2;
    }

    if (atacante->classe_id == MAGO && chanceSucesso(25)) {
        printf("  -> Habilidade especial do Mago ativada: Bola de Fogo (ignora defesa)!\n");
        danoBase = atacante->ataque;
    }
    
    if (defensor->defesa > 0 && chanceSucesso(20)) {
        printf("  -> Falha na defesa do %s! Dano nao e reduzido pela defesa.\n", defensor->nome_classe);
        danoBase = atacante->ataque;
    }

    return danoBase;
}

void realizarAtaque(Personagem *atacante, Personagem *defensor, int vida_anterior_defensor) {
    int danoAplicado = 0;
    int ataqueErro = 0;

    if (atacante->classe_id == BARBARO) {
        printf("  -> Habilidade especial do Barbaro ativada: Nunca erra o ataque!\n");
        ataqueErro = 0;
    } else {
        if (chanceSucesso(20)) {
            ataqueErro = 1;
        }
    }

    if (ataqueErro) {
        printf("  -> Ataque errou! Nenhum dano aplicado.\n");
    } else {
        danoAplicado = calcularDano(atacante, defensor);
        defensor->vida -= danoAplicado;

        printf("  -> Ataque bem-sucedido\n");
        printf("  -> Dano aplicado: %d\n", danoAplicado);

        if (defensor->vida < 0) {
            defensor->vida = 0;
        }

        printf("  -> %s agora com %d de vida\n", defensor->nome_classe, defensor->vida);

        if (atacante->classe_id == CACADOR && chanceSucesso(15)) {
            printf("  -> Habilidade especial do Cacador ativada: Ataque Duplo!\n");
            int danoSegundoAtaque = calcularDano(atacante, defensor);
            defensor->vida -= danoSegundoAtaque;
            if (defensor->vida < 0) {
                defensor->vida = 0;
            }
            printf("  -> Segundo ataque do Cacador! Dano adicional: %d. %s agora com %d de vida\n", danoSegundoAtaque, defensor->nome_classe, defensor->vida);
        }

        if (defensor->classe_id == PALADINO && defensor->vivo && chanceSucesso(30)) {
            if (defensor->vida > 0) {
                int vidaPerdida = vida_anterior_defensor - defensor->vida;
                int vidaRecuperada = (int)(vidaPerdida * 0.20);
                defensor->vida += vidaRecuperada;
                if (defensor->vida > 100) {
                    defensor->vida = 100;
                }
                printf("  -> Habilidade especial do Paladino ativada: Regeneracao! Recupera %d de vida.\n", vidaRecuperada);
                printf("  -> Paladino agora com %d de vida\n", defensor->vida);
            }
        }
    }

    if (defensor->vida <= 0) {
        defensor->vivo = 0;
        printf("  -> %s foi derrotado!\n", defensor->nome_classe);
    }
}

void imprimirEstadoEquipes(Personagem time1[], Personagem time2[]) {
    printf("\nTime 1:\n");
    for (int i = 0; i < TAMANHO_EQUIPE; i++) {
        printf("  %s: Vida %d %s\n", time1[i].nome_classe, time1[i].vida, time1[i].vivo ? "" : "(Derrotado)");
    }

    printf("\nTime 2:\n");
    for (int i = 0; i < TAMANHO_EQUIPE; i++) {
        printf("  %s: Vida %d %s\n", time2[i].nome_classe, time2[i].vida, time2[i].vivo ? "" : "(Derrotado)");
    }
    printf("\n");
}

int verificarFimDeJogo(Personagem time1[], Personagem time2[]) {
    int time1Mortos = 0;
    int time2Mortos = 0;

    for (int i = 0; i < TAMANHO_EQUIPE; i++) {
        if (!time1[i].vivo) {
            time1Mortos++;
        }
        if (!time2[i].vivo) {
            time2Mortos++;
        }
    }

    if (time1Mortos == TAMANHO_EQUIPE && time2Mortos == TAMANHO_EQUIPE) {
        return 3;
    } else if (time1Mortos == TAMANHO_EQUIPE) {
        return 2;
    } else if (time2Mortos == TAMANHO_EQUIPE) {
        return 1;
    } else {
        return 0;
    }
}

void apresentarVencedor(int resultado) {
    printf("--- BATALHA FINALIZADA ---\n");
    if (resultado == 1) {
        printf("O Time 1 e o VENCEDOR!\n");
    } else if (resultado == 2) {
        printf("O Time 2 e o VENCEDOR!\n");
    } else if (resultado == 3) {
        printf("A batalha terminou em EMPATE!\n");
    }
}
