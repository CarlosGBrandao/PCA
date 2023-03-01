
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char alunos[13][100] = {"Mayra", "Vitor", "Geovana", "Pedro", "Emanuele", "Gabriel",
                        "Italo", "Suzan", "Neto", "Beatriz", "Roberto", "Caio"};

    int notas[2][7] = {{1, 3, 5, 7, 9, 11}, {2, 4, 6, 8, 10, 12}};

    char sexo[13][1] = {"F", "M", "F", "M", "F", "M","M", "F", "M", "F", "M", "F"};

        printf("\n");
    letraC(alunos, notas, sexo);
        printf("\n");
    letraD(alunos, notas, sexo);
        printf("\n");
    letraF(alunos, notas);
        printf("\n");
    letraG(alunos, notas, sexo);

    return 0;
}

void funcaoC(char eq[12][100], int notas[2][6], char sexo[12][1])
{
    int contador = 0, contador2 = 0;

    for (int i = 0; i < 6; i++)
    {
        if (sexo[i][0] == 'F')
            contador++;
    }

    for (int j = 6; j < 12; j++)
    {
        if (sexo[j][0] == 'F')
            contador2++;
    }

    if (contador > contador2)
    {
        printf("Equipe 01 > Equipe 02 ");
    }
    else if (contador2 > contador)
    {
        printf("Equipe 02 > Equipe 01");
    }
    else
    {
        printf("As equipes tem a mesma quantidade de pessoas. ");
    }
}

void funcaoD(char proj[12][100], int notas[2][6], char sexo[12][1])
{
    char alunas[6][100];

    printf("Alunas que podem entrar no projeto: ");

    for (int i = 0; i < 12; i++)
    {
        for (int j = i; i < 12; j++)
        {
            if (notas[i][j] >= 8 && sexo[j][0] == 'F')
            {
                printf("%s ", proj[j]);
            }
        }
    }
}

void funcaoF(char proj[12][100], int notas[2][6])
{
    printf("Notas das Meninas somadas: ");
    for (int j = 0; j < 6; j++)
    {
        notas[1][j] += 1;

        printf("%i ", notas[1][j]);
    }
}

void funcaoG(char proj[13][100], int notas[2][7], char sexo[13][1])
{
    int option;

    printf("Insira o nome do novo aluno. ");
    scanf(" %s", &proj[13]);

    setbuf(stdin, NULL);
    printf("Insira o sexo do novo aluno. ");
    scanf(" %s", &sexo[13]);

    setbuf(stdin, NULL);
    printf("Insira a nota do novo aluno. ");
    scanf("%i", &notas[2]);

    for (int i = 0; i < 14; i++)
    {
        printf("%s ", proj[i]);
    }
}
