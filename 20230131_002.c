#include <stdio.h>
char carro[5][100];
float consumo[5];
void preencher(){
    int linha,coluna;
    printf("insira os modelos dos carras:\n");
    for(linha=0;linha<5;linha++){
        scanf("%s",carro[linha]);
    }
}
void Consumo(){
    int linha,aux,aux2;
    for(linha=0;linha<5;linha++){
        printf("Consumo do ");
        printf("%s:\n",carro[linha]);
        printf("(Em Km/L)\n");
        scanf("%f",&consumo[linha]);
    }
    for(linha=0;linha<5;linha++){
      if(linha==0){
          aux=consumo[linha];
          aux2=linha;
      }
      if(aux>consumo[linha]){
          aux=consumo[linha];
          aux2=linha;
      }
    }
    printf("O carro mais economico:%s\n",carro[aux2]);
    printf("O que cada carro gasta de combustivel a cada 1000km\n");
    for(linha=0;linha<5;linha++){
        printf("Consumo do ");
        printf("%s(em Litros):\n",carro[linha]);
        printf("%.2fL\n",1000*consumo[linha]);
    }
}
int main()
{
   preencher();
   Consumo();

    return 0;
}