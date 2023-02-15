#include <stdio.h>
#include <stdlib.h>

int leitor(int num){
    printf("Digite um numero:\n");
    scanf("%d", &num);
    while(num > 100){
        printf("Numero nao permitido, o numero deve estar entre 0 e 100.\n");
        printf("Digite um numero:\n");
        scanf("%d", &num);
    }
    return num;
}

int vetor(int num){
    printf("Quantos numeros voce quer inscrever?\n");
    scanf("%d", &num);
    while(num<0 || num>100){
        printf("Numero nao permitido.\n");
        printf("Quantos numeros voce quer inscrever?\n");
        scanf("%d", &num);
    }
    return num;
}

int main(){
    int numeros2 = vetor(numeros2);
    int numeros[numeros2];
    int linha; int coluna=0; int k;
    for (linha=0; linha<numeros2; linha++){
        numeros[linha] = leitor(numeros[linha]);
    }
    int numeros3[linha];
    int l = linha;
    while(coluna<l){
        numeros3[coluna]=numeros[linha-1];
        coluna++;
        linha--;
    }
    printf("Os numeros que voce digitou em ordem invertida:\n");
    for(k=0; k<l; k++){
    printf("%d ", numeros3[k]);
    }
}