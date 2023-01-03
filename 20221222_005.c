
#include <stdio.h>
#include <stdlib.h>

int main()
{
  float aux,num, soma;
  num = 1/3;
  soma = 0;
  
  for(aux=1;aux<=49;aux++){
      num = num * 0.5;
      
      soma = soma + 1 + (3/2) + num;
      
  }
 
 printf("%f",soma);
 
}
