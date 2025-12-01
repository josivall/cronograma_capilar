#include <stdio.h>
#include "entrada.h"
#include "saida.h"
#include "processamento.h"

int main() {
    int opcao;

    do {
        menu();
        printf("Escolha uma opcao: ");

        char entrada[10];
        if (fgets(entrada, sizeof(entrada), stdin)) {
            if (sscanf(entrada, "%d", &opcao) != 1) {
                opcao = -1;
            }
        }

        switch (opcao) {
            case 1: cadastrarUsuario(); break;
            case 2: mostrarUsuarios(); break;
            case 3: gerarCronograma(); break;
            case 4: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }

    } while (opcao != 4);

    return 0;
}
