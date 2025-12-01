#include <stdio.h>
#include <string.h>
#include "entrada.h"
#include "tipos.h"

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void cadastrarUsuario() {
    if (qtdUsuarios >= MAX) {
        printf("\nLimite de usuarios atingido!\n");
        return;
    }

    printf("\nDigite o nome do usuario: ");
    fgets(usuarios[qtdUsuarios].nome, TAM, stdin);
    usuarios[qtdUsuarios].nome[strcspn(usuarios[qtdUsuarios].nome, "\n")] = 0;

    do {
        printf("Digite o tipo de cabelo (liso, ondulado, cacheado, crespo): ");
        fgets(usuarios[qtdUsuarios].tipoCabelo, TAM, stdin);
        usuarios[qtdUsuarios].tipoCabelo[strcspn(usuarios[qtdUsuarios].tipoCabelo, "\n")] = 0;

    } while (
        strcmp(usuarios[qtdUsuarios].tipoCabelo, "liso") != 0 &&
        strcmp(usuarios[qtdUsuarios].tipoCabelo, "ondulado") != 0 &&
        strcmp(usuarios[qtdUsuarios].tipoCabelo, "cacheado") != 0 &&
        strcmp(usuarios[qtdUsuarios].tipoCabelo, "crespo") != 0
    );

    do {
        printf("Digite o nivel de dano (baixo, medio, alto): ");
        fgets(usuarios[qtdUsuarios].nivelDano, TAM, stdin);
        usuarios[qtdUsuarios].nivelDano[strcspn(usuarios[qtdUsuarios].nivelDano, "\n")] = 0;

    } while (
        strcmp(usuarios[qtdUsuarios].nivelDano, "baixo") != 0 &&
        strcmp(usuarios[qtdUsuarios].nivelDano, "medio") != 0 &&
        strcmp(usuarios[qtdUsuarios].nivelDano, "alto") != 0
    );

    printf("Digite o objetivo: ");
    fgets(usuarios[qtdUsuarios].objetivo, TAM, stdin);
    usuarios[qtdUsuarios].objetivo[strcspn(usuarios[qtdUsuarios].objetivo, "\n")] = 0;

    qtdUsuarios++;
    printf("\nUsuario cadastrado com sucesso!\n");
}
