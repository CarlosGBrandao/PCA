#include <stdio.h>
#include <stdlib.h>

int soma_arrays(int *a, int *b, int *c, int tam_a, int tam_b) {
    if (tam_a != tam_b) {
        return 0; 
    }
    for (int i = 0; i < tam_a; i++) {
        *(c + i) = *(a + i) + *(b + i); 
    }
    return 1; 
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {10, 20, 30, 40, 50};
    int c[5];

    int tam_a = sizeof(a) / sizeof(a[0]);
    int tam_b = sizeof(b) / sizeof(b[0]);

    int resultado = soma_arrays(a, b, c, tam_a, tam_b);

    if (resultado) {
        printf("Soma dos arrays:\n");
        for (int i = 0; i < tam_a; i++) {
            printf("%d + %d = %d\n", *(a + i), *(b + i), *(c + i));
        }
    } else {
        printf("Tamanhos dos arrays diferentes, operação não realizada.\n");
    }

    return 0;
}