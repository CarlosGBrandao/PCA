#include <stdio.h>
#include <stdlib.h>

int main(){
    int total,linha,coluna,x,vetor[100],guardar,min,n =1;
    printf("Quantidades de numero: ");
    scanf("%d",&total);

    for (linha = 1; linha<= total;linha++){

        printf("Numero na posicao %d: ", linha);
        scanf("%d",&vetor[linha]);}
    for( linha= 1; linha<= total; linha++){
        min = linha;
        for( coluna = linha+1; coluna<= total; coluna++){
            if(vetor[coluna] < vetor[min]){
                min = coluna;
            }
        }
        guardar = vetor[min];
        vetor[min] = vetor[linha];
        vetor[linha] = guardar;
    }
    for( x = 1; x<= total; x++){
        printf("%d",vetor[x]);
    }

    }