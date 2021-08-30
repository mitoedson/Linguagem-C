/*
Arquivo: ex01_17.c
Modificado em 30/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Programa verifica a faixa de idade, gênero e contribuição, se o contribuinte está apto a aposentar.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    // Início do programa
    char sexo;
    float idade,trabalho;
    int repete=0;
    printf("\n\t\t=====  Aula 01 - Ex.17  ======");
    printf("\n\t\t= Aposentar ou nao aposentar =\n");

    printf("\nEste programa verifica a faixa de idade, gênero e contribuição, se o contribuinte está apto a aposentar");

    printf("\n\nPor favor, digite:");
    printf("\n==================\n");
    do
    {
        printf("\nQual o seu sexo (M ou F)? ");
        scanf(" %c",&sexo);
        if(toupper(sexo)!='M' && toupper(sexo)!='F')
            printf("\nOpcao invalida!!!\n");
     } while(toupper(sexo)!='M' && toupper(sexo)!='F');

    printf("\n\nPor favor, digite:");
    printf("\n==================\n");

    do
    {
        printf("\nSua idade (em anos): ");
        scanf("%f",&idade);
        if(idade < 0)
            printf("\nIdade invalida!!!\n");
    } while(idade < 0);

    printf("\n\nPor favor, digite:");
    printf("\n==================\n");

    do
    {
        printf("\nSeu tempo de trabalho (em anos): ");
        scanf("%f",&trabalho);
        if(trabalho < 0)
            printf("\nTempo de trabalho invalido!!!\n");
        if(trabalho > idade)
            printf("\nTempo de trabalho nao pode ser maior que a idade!!!\n");
     } while(trabalho < 0 || trabalho > idade);

    
    if(toupper(sexo) == 'M' && idade >= 65 && trabalho >= 10)
            printf("\nAPTO A APOSENTAR!!!\n");
    else if(toupper(sexo) == 'M' && idade >= 63 && trabalho >= 15)
            printf("\nAPTO A APOSENTAR!!!\n");
    else if(toupper(sexo) == 'F' && idade >= 63 && trabalho >= 10)
            printf("\nAPTO A APOSENTAR!!!\n");
    else if(toupper(sexo) == 'F' && idade >= 61 && trabalho >= 15)
            printf("\nAPTO A APOSENTAR!!!\n");
    else
            printf("\nINAPTO A APOSENTAR!!!\n");

    printf("\n\n");
    return 0;
    // Fim do programa
}
