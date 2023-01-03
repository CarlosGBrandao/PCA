
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int primo, num, aux,aux2;
  aux = 0;
  
  
  printf("digite um numero:\n");
  scanf("%d",&num);
  
  for (aux2 = 2; aux2 <= num / 2; aux2++) {
    if (num % aux2 == 0) {
       aux++;
       break;
    }
  }
    if (aux == 0)
    printf("%d eh primo\n", num);
 else
    printf("%d nao eh primo\n", num);
 
 
}
