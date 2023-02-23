#include <stdio.h>
#include <stdlib.h>

int *intersecao(int *A, int *B) {
    int n = A[0], m = B[0];
    int *C = malloc(sizeof(int) * (n + m));
    int i = 1, j = 1, k = 1;
    while (i <= n && j <= m) {
        if (A[i] == B[j]) {
            C[k] = A[i];
            i++;
            j++;
            k++;
        } else if (A[i] < B[j]) {
            i++;
        } else {
            j++;
        }
    }
    C[0] = k - 1;
    return C;
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    int *inter = 0;
    for (int i = 0; i < n; i++) {
        int m;
        printf("Digite o tamanho do conjunto %d: ", i+1);
        scanf("%d", &m);
        int *conjunto = malloc(sizeof(int) * (m + 1));
        conjunto[0] = m;
        printf("Digite os elementos do conjunto %d: ", i+1);
        for (int j = 1; j <= m; j++) {
            scanf("%d", &conjunto[j]);
        }
        if (i == 0) {
            inter = conjunto;
        } else {
            inter = intersecao(inter, conjunto);
            
        }
    }
    printf("INTER = {%d", inter[1]);
    for (int i = 2; i <= inter[0]; i++) {
        printf(", %d", inter[i]);
    }
    printf("}\n");
    
    return 0;
}

/*Utilizei do chat GPT para entender como fazer a alocação da intersessão*/