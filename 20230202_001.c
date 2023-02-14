#include <stdio.h>
#include<string.h>
char equipe[5][4][100];
char membro[50];
int main(){
    int linha,coluna,l,k;
    for(linha=0;linha<5;linha++){
        printf("Equipe %d:\n",linha+1);
        for(coluna=0;coluna<4;coluna++){
            printf("Integrante %d\n",coluna+1);
            scanf("%s", equipe[linha][coluna]);
    }
    }
    printf("Qual o nome deseja buscar entra as equipes?\n");
    scanf("%s",membro);
    for(linha=0;linha<5;linha++){
        for(coluna=0;coluna<4;coluna++){
        if(strcmp(membro,equipe[linha][coluna])==0){
            printf("O %s está na equipe %d",membro,linha+1);
        }
    }
    }
    
    
    
    return 0;
}