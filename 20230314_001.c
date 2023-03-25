#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float *notas, int n, float *media, float *desvio) {
    int i;
    float soma = 0, somaQuadrados = 0;

    
    for (i = 0; i < n; i++) {
        soma += notas[i];
        somaQuadrados += notas[i] * notas[i];
    }

    
    *media = soma / n;
    *desvio = sqrt((somaQuadrados / n) - (*media) * (*media));
}

int main() {
    int n, i;
    float *notas, media, desvio;

    
    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &n);

    
    notas = (float *) malloc(n * sizeof(float));

   
    for (i = 0; i < n; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    
    mediaDesvio(notas, n, &media, &desvio);

  
    printf("Media das notas: %.2f\n", media);
    printf("Desvio padrao das notas: %.2f\n", desvio);

   
    free(notas);

    return 0;
}