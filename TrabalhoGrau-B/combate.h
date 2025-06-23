#ifndef COMBATE_H
#define COMBATE_H

#include "personagem.h"

#define TAMANHO_EQUIPE 5

void inicializarEquipe(Personagem equipe[]);
int sortearTimeInicial();
int selecionarAtacante(Personagem equipe[]);
int selecionarAlvo(Personagem equipeAdversaria[]);
int calcularDano(const Personagem *atacante, const Personagem *defensor);
void realizarAtaque(Personagem *atacante, Personagem *defensor, int vida_anterior_defensor);
void imprimirEstadoEquipes(Personagem time1[], Personagem time2[]);
int verificarFimDeJogo(Personagem time1[], Personagem time2[]);
void apresentarVencedor(int resultado);

#endif // COMBATE_H
