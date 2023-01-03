
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, impar, par;
    num = 0;
    impar = 0;
    par = 0;
 printf("Escreva os numeros:\n");
 while(num<=1000){
     scanf("%d",&num);
     if(num>1000)
     break;
     if(num % 2 == 0){
         par = par + num;
     }
     if(num % 2 != 0){
         impar = impar + num;
     }
     
    
     
     
     
 }
 printf("soma dos pares: %d\n",par);
 printf("soma dos impares: %d\n",impar);
}
