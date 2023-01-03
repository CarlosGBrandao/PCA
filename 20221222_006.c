#include<stdio.h>

#include<stdlib.h>

int main()

{  

int soma,dobro,num,aux;
soma=0;
printf("Digite um número:");

scanf("%d",&num);

printf("\n");  

dobro=2*num;

for (aux=1;aux<=num;aux++)

{  

 if(num % aux == 0)

   {

    soma=soma+aux;

   }

}

 if(soma==dobro)

   printf("%d é um número perfeito ",num);

 else

  printf ("%d não é um número perfeito",num);

 return 0;
}