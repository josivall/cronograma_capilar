#include <stdio.h>
#include <string.h>
#include "processamento.h"
#include "entrada.h"
#include "tipos.h"

void gerarCronograma() {
    if (qtdUsuarios == 0) {
        printf("\nNenhum usuario cadastrado!\n");
        return;
    }

    int indice;
    printf("\nDigite o numero do usuario (1 a %d): ", qtdUsuarios);
    scanf("%d", &indice);
    limparBuffer();

    if (indice < 1 || indice > qtdUsuarios) {
        printf("\nNumero invalido!\n");
        return;
    }

    indice--;

    Usuario u = usuarios[indice];

    printf("\n===== CRONOGRAMA DE %s =====\n", u.nome);
    printf("Tipo de cabelo: %s\n", u.tipoCabelo);
    printf("Nível de dano: %s\n", u.nivelDano);
    printf("Objetivo: %s\n", u.objetivo);
    printf("----------------------------\n");

    if (strcmp(u.nivelDano, "baixo") == 0) {
        printf("Segunda: Hidratacao\n");
        printf("Quinta: Nutricao\n");
        printf("Domingo: Descanso\n");
    } else if (strcmp(u.nivelDano, "medio") == 0) {
        printf("Segunda: Hidratacao\n");
        printf("Quarta: Nutricao\n");
        printf("Sexta: Reconstrucao\n");
    } else {
        printf("Segunda: Hidratacao\n");
        printf("Terca: Nutricao\n");
        printf("Quinta: Reconstrucao\n");
        printf("Sabado: Nutricao\n");
    }

    printf("=============================\n");
}
