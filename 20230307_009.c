#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *encontra_letra(char *str, char letra, int *tamanho) {
    int i;
    int count = 0;
    int *indices = NULL;

    
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == letra) {
            count++;
        }
    }

   
    if (count > 0) {
        indices = (int *) malloc(count * sizeof(int));
        count = 0;
        for (i = 0; i < strlen(str); i++) {
            if (str[i] == letra) {
                indices[count++] = i;
            }
        }
    }

   
    *tamanho = count;

    return indices;
}

int main() {
    char str[] = "banana";
    char letra = 'a';
    int *indices;
    int tamanho;
    int i;

    
    indices = encontra_letra(str, letra, &tamanho);

 
    if (tamanho > 0) {
        printf("Letra '%c' encontrada nas posicoes:", letra);
        for (i = 0; i < tamanho; i++) {
            printf(" %d", indices[i]);
        }
        printf("\n");
    } else {
        printf("Letra '%c' nao encontrada na string.\n", letra);
    }


    free(indices);

    return 0;
}