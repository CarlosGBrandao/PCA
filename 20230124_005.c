#include <stdio.h>
#include <stdlib.h>

int ler(int num){
    printf("Digite um numero:\n");
    scanf("%d", &num);
    while(num>100 || num<0){
        printf("Numero nao permitido, o numero deve estar entre 0 e 100.\n");
        printf("Digite um numero:\n");
        scanf("%d", &num);
    }
    while(num>15 && num<100){
        printf("Tem certeza disso? Acho melhor nao digitar um numero tao grande hein...\n");
        printf("Digite um numero:\n");
        scanf("%d", &num);
    }
    return num;
}

int funcao(int num){
    printf("Quantos numeros voce quer inscrever?\n");
    scanf("%d", &num);
    while (num>100 || num<0){
        printf("Numero nao permitido, o numero deve estar entre 0 e 100.\n");
        printf("Quantos numeros voce quer inscrever?\n");
        scanf("%d", &num);
    }
    return num;
}

int fatorial(int num){
    int multiplicador = 1;
    int i = 2;
    while(i<=num){
        multiplicador = multiplicador * i;
        i++;
    }
    return multiplicador;
}

int main(){
    int numeros2 = funcao(numeros2);
    int numeros[numeros2]; int linha; int coluna; int numerosfatorial[numeros2];
    for(linha=0; linha<numeros2; linha++){
        numeros[linha] = ler(numeros[linha]);
        numerosfatorial[linha] = fatorial(numeros[linha]);
    }
    printf("Os fatoriais dos numeros que voce digitou:\n");
    for(coluna=0; coluna<numeros2; coluna++){
        printf("%d ", numerosfatorial[coluna]);
    }
}