#ifndef TIPOS_H
#define TIPOS_H

#define MAX 5
#define TAM 50

typedef struct {
    char nome[TAM];
    char tipoCabelo[TAM];
    char nivelDano[TAM];
    char objetivo[TAM];
} Usuario;

extern Usuario usuarios[MAX];
extern int qtdUsuarios;

#endif
