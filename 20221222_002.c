
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aux, maior, menor;
    int aux2 = true;
    
    scanf("%d",&aux);
    
    if(aux2==true){
        maior = aux;
        menor = aux;
        aux2 = false;
    }
    if(aux>maior){
        maior = aux;
    }
    if(aux<menor){
        menor = aux;
    }
printf("%d\n",maior);
printf("%d\n",menor);
    return 0;
}
