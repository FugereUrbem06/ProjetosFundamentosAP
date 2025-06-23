#include "utils.h"

void inicializarGeradorAleatorio() {
    srand((unsigned int)time(NULL));
}

int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

int chanceSucesso(int porcentagem) {
    return gerarNumeroAleatorio(1, 100) <= porcentagem;
}
