#include <stdio.h>
void binario(int a){
    int vetor[50],linha,coluna,aux;
    aux=a;
    linha=0;
    while(a>0){
        vetor[linha]=a%2;
        a=a/2;
        linha++;
        
    }
    for(coluna=linha-1;coluna>=0;coluna--){
        printf("%d",vetor[linha]);
    
    
}}
int t;
int main()
{
    scanf("%d",&t);
    binario(t);
    
    

    return 0;
}