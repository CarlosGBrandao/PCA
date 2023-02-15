#include <stdio.h>
#include <stdlib.h>

int ler(int num){
    printf("Digite as coordenadas:\n");
    scanf("%d", &num);
    return num;
}

int vetou(int num){
    printf("Quantas coordenadas tem os vetores?\n");
    scanf("%d", &num);
    while(num<2){
        printf("O vetor so existe a partir de duas coordenadas.\n");
        printf("Quantas coordenadas tem os vetores?\n");
        scanf("%d", &num);
    }
    return num;
}

int main(){
    int numeros2 = vetou(numeros2);
    int funcao1[numeros2]; int funcao2[numeros2]; int funcaomultiplicador[numeros2];
    int linha; int coluna; int k; int l; int soma = 0;
    for(k=0; k<numeros2; k++){
        funcao1[k] = ler(funcao1[k]);
    }
    for(l=0;l<numeros2; l++){
        funcao2[l] = ler(funcao2[l]);
    }
    for(linha=0; linha<numeros2; linha++){
        funcaomultiplicador[linha] = funcao1[linha] * funcao2[linha];
    }
    for(coluna=0; coluna<numeros2; coluna++){
        soma = soma + funcaomultiplicador[coluna];
    }
    printf("O produto escalar entre os dois vetores e igual a %d", soma);
    return 0;
}