#include<stdio.h>
#include<string.h>
void codificar(char c[]){
    int aux,aux2;
    aux='a'-'A';
    printf("String antes da codificacao:%s \n",c);
for(aux2=0;aux2<strlen(c);aux2++){
    if(c[aux2]>'Z'){
        c[aux2]=c[aux2]-aux;
    }
    if(c[aux2]==' '){}else{
    if(c[aux2]=='Z'||c[aux2]=='X'||c[aux2]=='Y'){
        c[aux2]=c[aux2]-23;
    }else{
        c[aux2]=c[aux2]+3;
    }
    
}}
 printf("String depois da codificacao:%s \n",c);
}

char T[90];
int main(){
    scanf("%89[^\n]s",T);
    codificar(T);
        return 0;
    }