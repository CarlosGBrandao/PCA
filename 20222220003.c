#include <stdio.h>

int main()
{
   float impar,par;
   int num, cont;
   
   impar = 0;
   
   for (cont=1;cont<=50;cont++) {
       printf("Digite o proximo numero: \n");
       scanf("%d", &num);
       if(num%2!=0)
        if(num >= 100)
            if (200 >= num)
                impar = impar + num;
          
               
           
       
   }  
       
   
    printf("%f\n", impar); 
}