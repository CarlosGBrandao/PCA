#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[8];
    int *p = arr; 

    
    printf("Digite 8 valores inteiros:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", p);
        p++;
    }

    
    printf("Valores lidos e seus respectivos endereços:\n");
    p = arr; 
    for (int i = 0; i < 8; i++) {
        printf("%d (endereco: %p) ", (*p)*2, p);
        if ((*p) % 2 == 0) {
            printf("(valor par)");
        }
        printf("\n");
        p++;
    }

    return 0;
}