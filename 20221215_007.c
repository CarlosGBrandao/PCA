
#include <stdio.h>

void main()
{
    float faren, celsius;
    printf("Insira a temperatura em Farenheit: \n");
    scanf("%f", &faren);
    
    celsius = (5*(faren-32)/9);
    
    printf("%fC\n", celsius);
    

    
}
