#include <stdio.h>
int funcao(int numero){
    int n;
    
    n = 1;
   while(n!=0){
    
    printf("digite um numero par\n");
    scanf("%d",&numero);
    if(numero%2!=0){
        printf("Digite um numero par!\n");
        
    }
    else
    n = 0;
    }
   return numero;
    }
    

int funcao2(int X)
{
    int   a, b, c, d=0;
int N = 1;
    for(a=1; a<=N; a++)
    {
        
        c=X/2; d=0;
        for(b=1; b<=c; b++)
        {
            if(X%b==0)
                d+=b;
        }
        if(d==X)
            printf("%d eh perfeito\n",X);
        else
            printf("%d nao eh perfeito\n",X);
    }
    return 0;
}   


