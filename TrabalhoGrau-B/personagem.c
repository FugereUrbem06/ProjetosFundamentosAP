#include "personagem.h"
#include <stdio.h>

void inicializarPersonagem(Personagem *p, int id, Classe classe) {
    p->id = id;
    p->classe_id = classe;
    p->vida = 100;
    p->vivo = 1;

    switch (classe) {
        case GUERREIRO:
            strcpy(p->nome_classe, "Guerreiro");
            p->ataque = 20;
            p->defesa = 10;
            break;
        case MAGO:
            strcpy(p->nome_classe, "Mago");
            p->ataque = 30;
            p->defesa = 5;
            break;
        case CACADOR:
            strcpy(p->nome_classe, "Cacador");
            p->ataque = 18;
            p->defesa = 8;
            break;
        case PALADINO:
            strcpy(p->nome_classe, "Paladino");
            p->ataque = 15;
            p->defesa = 12;
            break;
        case BARBARO:
            strcpy(p->nome_classe, "Barbaro");
            p->ataque = 25;
            p->defesa = 6;
            break;
        default:
            strcpy(p->nome_classe, "Desconhecido");
            p->ataque = 0;
            p->defesa = 0;
            break;
    }
}
