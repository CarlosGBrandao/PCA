
#include <stdio.h>

int main()
{
    int nota1,nota2,nota3,nota4,media;
    printf("Insira as 4 notas a serem calculadas: \n");
    scanf("%d%d%d%d", &nota1, &nota2, &nota3, &nota4);
    

    media = (nota1+nota2+nota3+nota4)/4;
    printf("%d\n", media);

    
}
