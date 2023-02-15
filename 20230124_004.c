#include <stdio.h>
#include <stdlib.h>

int ler(int num){
    printf("Digite um numero:\n");
    scanf("%d", &num);
    while(num > 100){
        printf("Numero nao permitido, o numero deve ser menor que 100.\n");
        printf("Digite um numero:\n");
        scanf("%d", &num);
    }
    return num;
}

int funcao(int num){
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
    int numeros2 = funcao(numeros2);
    int numeros[numeros2];
    int linha; int coluna=0; int k=0; int soma=0; int l;
    for(linha=0; linha<numeros2; linha++){
        numeros[linha]=ler(numeros[linha]);
        if(numeros[linha]%2==0){
            soma++;
        }
    }
    int numeros3[soma];
    while(coluna<=soma-1){
        if(numeros[k]%2==0){
            numeros3[coluna]=numeros[k];
            coluna=coluna+1;
        }
        k++;
    }
    printf("Os numeros pares digitados sao:\n");
    for(l=0;l<=soma-1; l++){
        printf("%d ", numeros3[l]);
    }
    if(soma == 0){
        printf("Voce nao digitou numeros pares.");
    }
return 0;
}