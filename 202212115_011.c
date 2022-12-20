
#include <stdio.h>

void main()
{
    float hora,hora2,salario,inss,renda,sindicato,liquido;
    
    printf("Insira quantas horas voce trabalha no mes: \n");
    scanf("%f", &hora);
    printf("Insira quanto voce ganha por hora no mes: \n");
    scanf("%f", &hora2);
    
    salario = hora * hora2;
    renda = (salario*11)/100;
    inss = (salario*8)/100;
    sindicato = (salario*5)/100;
    liquido = salario - renda - inss - sindicato;
    
    printf("Salario bruto: %fR$\n", salario);
    printf("INSS: %fR$\n", inss);
    printf("Sindicato: %fR$\n", sindicato);
    printf("Salario liquido: %fR$\n", liquido);

    
}
