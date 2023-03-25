#include <stdio.h>
#include <stdlib.h>

void imprimir_vetor(float* inicio, float* fim) {
    while (inicio <= fim) {
        printf("%.2f ", *inicio);
        inicio++;
    }
    printf("\n");
}

int main() {
    float vetor1[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    float vetor2[] = {0.5, 1.5, 2.5, 3.5, 4.5, 5.5};
    float vetor3[] = {2.0, 4.0, 6.0, 8.0};

    printf("Parte 1 do vetor 1: ");
    imprimir_vetor(&vetor1[0], &vetor1[2]);

    printf("Parte 2 do vetor 1: ");
    imprimir_vetor(&vetor1[3], &vetor1[4]);

    printf("Parte 1 do vetor 2: ");
    imprimir_vetor(&vetor2[0], &vetor2[3]);

    printf("Parte 2 do vetor 2: ");
    imprimir_vetor(&vetor2[4], &vetor2[5]);

    printf("Parte 1 do vetor 3: ");
    imprimir_vetor(&vetor3[0], &vetor3[1]);

    printf("Parte 2 do vetor 3: ");
    imprimir_vetor(&vetor3[2], &vetor3[3]);

    return 0;
}