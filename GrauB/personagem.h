#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string.h>

typedef enum {
    GUERREIRO,
    MAGO,
    CACADOR,
    PALADINO,
    BARBARO,
    NUM_CLASSES
} Classe;

typedef struct {
    int id;
    Classe classe_id;
    char nome_classe[20];
    int vida;
    int ataque;
    int defesa;
    int vivo;
} Personagem;

void inicializarPersonagem(Personagem *p, int id, Classe classe);

#endif // PERSONAGEM_H
