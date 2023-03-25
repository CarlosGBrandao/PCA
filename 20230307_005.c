#include <stdio.h>
#include <stdlib.h>

int ordena_valores(int *a, int *b, int *c) {
    int igual = 0;
    int tmp;

   
    if (*a > *b) {
        tmp = *a;
        *a = *b;
        *b = tmp;
    }
    if (*b > *c) {
        tmp = *b;
        *b = *c;
        *c = tmp;
    }
    if (*a > *b) {
        tmp = *a;
        *a = *b;
        *b = tmp;
    }

    
    if (*a == *b && *b == *c) {
        igual = 1;
    }

    return igual;
}

int main() {
    int a, b, c;
    int igual;

    
    printf("Digite tres valores inteiros:\n");
    scanf("%d %d %d", &a, &b, &c);

  
    igual = ordena_valores(&a, &b, &c);

    
    printf("Valores ordenados: %d %d %d\n", a, b, c);

  
    if (igual) {
        printf("Os tres valores sao iguais\n");
    } else {
        printf("Os tres valores sao diferentes\n");
    }

    return 0;
}