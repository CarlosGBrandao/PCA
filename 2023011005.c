#include <stdio.h>
#include <math.h>
int t;

int funcaocasas(int a){
    int i;
    i=0;
    while(a>0){
        a=a/10;
        i++;
    }
    return i;
}
int digito(int n, int p){
    int i;
    i=0;
    while(n>0){
        if(n%10==p){
            i++;
        }
        n=n/10;
        
    }
    return i;
}

void permutacao(int a, int b){
    int i;
    i=0;
    while(1){
        if(digito(a,i)!=digito(b,i)){
            printf("%d nao eh permutação de %d!\n",a,b);
            break;
        }
        i++;
        if(i==9){
           printf("%d eh permutação de %d!\n",a,b);
            break; 
        }
    }
    
}
void verificar(int X, int Y){
    int l;
    t=0;
    if(Y>X){
        t=0;
    }else{
        l=pow(10,funcaocasas(Y));
        if(X % l == Y){
            t=1;
           
        }else{
            t=0;
            
        }
        
        
    }
    
}

void verificar2(int X,int Y){
    if(X>Y){
        printf("nao eh segmento\n");
    }else{
    while(1){
        
        verificar(Y,X);
        Y=Y/10;
        if(t==1){
            printf("eh segmento\n");
            break;
        }
        if(t==0 && funcaocasas(X)>funcaocasas(Y)){
            printf("nao eh segmento\n");
            break;
        }
    }
        
    }
    
}
int binario(int A){
    int b,i;
    i=0;
    b=0;
    while(A>0){
        verificar(A,1);
        if(t==1){
            b=b+pow(2,i);
        }
        i++;
        A=A/10;
    }
    return b;
}
int n,d,k;
int main()
{
    printf("insira um binario");
    scanf("%d",&n);
    printf("%d\n",binario(n));
    return 0;
}