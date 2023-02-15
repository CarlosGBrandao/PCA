#include <stdio.h>
#include <stdlib.h>

int ler(int num){
    printf("Em qual face caiu?\n");
    scanf("%d", &num);
    while(num<1 || num>6){
        printf("O dado possui 6 faces.\n");
        printf("Em qual face caiu?\n");
        scanf("%d", &num);
    }
    return num;
}

int funcao(int num){
    printf("Quantas vezes voce quer lancar o dado?\n");
    scanf("%d", &num);
    while(num<0){
        printf("Numero nao permitido. O numero deve ser positivo.\n");
        printf("Quantas vezes voce quer lancar o dado?");
        scanf("%d", &num);
    }
    return num;
}

int main(){
    int numeros2 = funcao(numeros2); int numeros[numeros2];
    int faces[] = {1,2,3,4,5,6}; int vezes[] = {0,0,0,0,0,0};
    int linha; int coluna; int k; int l;
    for(l=0; l<numeros2; l++){
        numeros[l] = ler(numeros[l]);
    }
    for(linha=0; linha<numeros2; linha++){
        for(coluna=0; coluna<6; coluna++){
            if(numeros[linha] == faces[coluna]){
                vezes[coluna]++;
            }
        }
    }
    for(k=0;k<6;k++){
        printf("O numero %d aparece %d vezes.\n", faces[k], vezes[k]);
    }
    return 0;
}