/*
Arquivo: ex03_02b.c
Modificado em 04/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Use a função anterior e crie um programa que imprima os valores de n! para n = 1, . . . , 20.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


double fatorial(double x)
{
    int i;
    double base=1;
    if(x==0)
        return 1;
    else
    {
        for(i = x; i > 0; i--)
        {
            base *= i;
        }
        return base;
    }
}

int main()
{
    // Início do programa
    double n;
    int j;
    char sair;
    do
    {
        printf("\n\nImprime fatorial de 1 ate 20\n");
        printf("============================\n");

        for(j = 1; j <= 20; j++)
        {
            printf("\n %d! = ",j);
            if(fatorial(j) < 0)
                printf("ERRO!");
            else
                printf("%.0f",fatorial(j));
        }

        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);
    } while (toupper(sair) != 'S');
 
    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
