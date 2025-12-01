#include <stdio.h>
#include "saida.h"
#include "tipos.h"

void menu() {
    printf("===============================\n");
    printf("== SISTEMA DE CRONOGRAMA =====\n");
    printf("1 - Cadastrar Usuario\n");
    printf("2 - Mostrar Usuarios\n");
    printf("3 - Gerar Cronograma\n");
    printf("4 - Sair\n");
    printf("===============================\n");
}

void mostrarUsuarios() {
    if (qtdUsuarios == 0) {
        printf("\nNenhum usuario cadastrado!\n");
        return;
    }

    printf("\n===== LISTA DE USUARIOS =====\n");
    for (int i = 0; i < qtdUsuarios; i++) {
        printf("%d. %s | %s | %s | %s\n",
               i + 1,
               usuarios[i].nome,
               usuarios[i].tipoCabelo,
               usuarios[i].nivelDano,
               usuarios[i].objetivo);
    }
    printf("===============================\n");
}
