#include <stdio.h>  
int main() {   
    
float peso;   int semanas, meses; 
printf("Digite o peso do feto em gramas e a quantidade de semanas da gestacao: "); 
scanf("%f %d", &peso, &semanas);
if (peso < 100 || semanas < 28){    
    printf("\n Parto não deverá ser realizado, reavaliar clinicamente.");
    }       
    else {     meses = semanas/4;
    if (peso > 2500 && meses > 7){       
        printf("\n Parto Normal");
        }     else if (peso > 2500 && meses <= 7){       
            printf("\n Parto Cesariana"); 
            }     else if (peso >= 1500 && peso <= 2000 && meses > 9){       
                printf("\n Parto Normal");
                }     else {       printf("\n Parto Cesariana"); 
                }   }   return 0; }
                