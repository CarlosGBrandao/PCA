#include <stdio.h>
#include <stdlib.h>

void min_max(int *v, int n, int *min, int *max) {
    int i;

    
    *min = *max = v[0];

    for (i = 1; i < n; i++) {
        if (v[i] < *min) {
            *min = v[i];
        }
        if (v[i] > *max) {
            *max = v[i];
        }
    }
}

int main() {
    int v[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int n = sizeof(v) / sizeof(int);
    int min, max;

    
    min_max(v, n, &min, &max);

    // Exibe os resultados na tela
    printf("Valor minimo: %d\n", min);
    printf("Valor maximo: %d\n", max);

    return 0;
}