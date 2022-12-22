
#include <stdio.h>

int main()
{
int nota1, nota2, nota3, media, aux, aux2;
aux = 0;
aux2 = 0;
printf("Digite as 3 notas: \n");
scanf("%d%d%d", &nota1, &nota2, &nota3);

if(nota1>nota2)
if(nota1>nota3)
aux = nota1;

if(nota3>nota2)
if(nota3>nota1)
aux = nota3;

if(nota2>nota1)
if(nota2>nota3)
aux = nota2;

if(nota1<nota2)
if(nota1<nota3)
aux2 = nota1;

if(nota2<nota1)
if(nota2<nota3)
aux2 = nota2;

if(nota3<nota2)
if(nota3<nota1)
aux2 = nota3;

media = (nota1 + nota2 + nota3)/3;


printf("Nota maior: %d\n", aux);
printf("Nota menor: %d\n", aux2);
printf("Media: %d\n",media);

        
        
    
}
