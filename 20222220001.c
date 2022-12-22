#include <stdio.h>

int main()
{
int num1, num2, aux;
num2 = 0;

for(aux=1;aux<=5;aux++){

printf("Insira o proximo numero:\n");
scanf("%d",&num1);

num2 = num2+num1;
}
printf("Soma: %d",num2);
}