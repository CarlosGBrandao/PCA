#include <stdio.h>
#include<string.h>
char nomes[20][120],nomes2[20][120];
char membro[50];
int aux=0;
void imprimir(char c[20][120],int l){
    int linha;
    for(linha=0;linha<l;linha++){
        printf("%d.%s\n",linha+1,nomes[linha]);
    }
    
}
void eliminacao(char c[20][120],char b[],int l){
    int linha,coluna;
    for(linha=0;linha<l;linha++){
        if(strcmp(c[linha],b)==0){
            for(coluna=linha;coluna<l;coluna++){
                strcpy(c[coluna],c[linha+1]);
            }
            linha--;
            l--;
            aux++;
        }
    }
    printf("Nova lista:\n");
    imprimir(c,l);
}
void ordemABC(char c[20][120],int l){
    int linha,coluna,pos;
    char m[120];
    char aux2[120];
    char r;
    for(linha=0;linha<l-1;linha++){
        pos=linha;
        for(coluna=linha+1;coluna<l;coluna++){
            if(c[pos][0]>c[coluna][0]){
                pos=coluna;
            }
       
        }
        if(linha!=pos){
            strcpy(aux2,c[linha]);
                strcpy(c[linha],c[pos]);
                strcpy(c[pos],aux2);
        }
    }
    imprimir(c,l);
}
void criarlistaABC(char c[20][120],int l,char c2[20][120]){
    int linha,coluna,pos;
    char m[120];
    char aux3[120];
    char r;
    for(linha=0;linha<l-1;linha++){
        pos=linha;
        for(coluna=linha+1;coluna<l;coluna++){
            if(c[pos][0]>c[coluna][0]){
                pos=coluna;
            }
       
        }
        if(linha!=pos){
            strcpy(aux3,c[linha]);
                strcpy(c[linha],c[pos]);
                strcpy(c[pos],aux3);
        }
    }
    for(linha=0;linha<l;linha++){
        strcpy(c2[linha],c[linha]);
    }
    
}

int main(){
    int linha,coluna,l,k;
    printf("Quantos nomes deseja inserir?\n");
    scanf("%d",&k);
    for(linha=0;linha<k;linha++){
        scanf("%s",nomes[linha]);
    }
    imprimir(nomes,k);
    printf("Deseja eliminar qual nome da lista?\n");
    scanf("%s",membro);
    eliminacao(nomes,membro,k);
    printf("Em ordem alfabetica:\n");
    ordemABC(nomes,k);
    printf("Lista criada em ordem alfabetica:");
    criarlistaABC(nomes,k,nomes2);
    for(linha=0;linha<k;linha++){
        printf("%s\n",nomes2[linha]);
    }
    return 0;
}