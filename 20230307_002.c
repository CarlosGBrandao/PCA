#include <stdio.h>
#include <stdlib.h>

int* encontrar_valor(int* inicio, int* fim, int valor) {
    while (inicio <= fim) {
        if (*inicio == valor) {
            return inicio;
        }
        inicio++;
    }
    return NULL;
}

#define TAMANHO_VETOR 10
#define VALOR_PROCURADO 2

int main() {
    int vetor[TAMANHO_VETOR] = {1, 2, 3, 2, 5, 6, 2, 8, 9, 2};
    int* ponteiro;

    printf("Enderecos das ocorrencias do valor %d no vetor:\n", VALOR_PROCURADO);
    ponteiro = encontrar_valor(&vetor[0], &vetor[TAMANHO_VETOR-1], VALOR_PROCURADO);
    while (ponteiro != NULL) {
        printf("%p\n", ponteiro);
        ponteiro = encontrar_valor(ponteiro+1, &vetor[TAMANHO_VETOR-1], VALOR_PROCURADO);
    }

    return 0;
}