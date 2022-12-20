
#include <stdio.h>

void main()
{
    float num3, produto, produto2, produto3;
    int num1, num2;
    
    printf("Insira dois numeros inteiros e um numero real: \n");
    scanf("%d%d%f", &num1, &num2, &num3);
    
    produto = 2*num1 * num2/2;
    produto2 = 3*num1 + num3;
    produto3 = num3*num3*num3;
    
    printf("%f %f %f\n", produto, produto2, produto3);
    

    
}
