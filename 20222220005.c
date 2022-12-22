#include <stdio.h>

int main()
{
    int num1,num3, num4;
    num3 = 1;
    num1 = 0;
    num4 = 0;
    while(num3<=20){
        printf("Digite o proximo numero: \n");
        scanf("%d", &num1);
        if(num1<0){
        printf("nao eh permitido numeros negativos\n");
        break;}
        if(num1>num4)
        num4 = num1;
        num3++;
    }
printf("o maior numero eh: %d", num4);
        
        
    
}