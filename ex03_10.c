/*
Arquivo: ex03_10.c
Modificado em 07/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Determine o que a seguinte definição recursiva para uma função f calcula. A definição da função f (válida para n>=0) é dada abaixo:  f(n)=0, se n=0. Caso contrário f(n)=n+f(n-1).

*/

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

double funcao(double x)
{
    double i,anterior,atual;
    
    for(i = 0; i <= x; i++)
    {
        if(i == 0)
        {
            atual = 0;
        }
        else
        {
            atual = i + anterior;
        }
        anterior = atual;
    }

    return atual;
}

int main()
{
    // Início do programa
    double n;
    char sair;
    do
    {
        printf("\n\nf(n) = n + f(n-1)\n");
        printf("=================\n");

        do
        {
            printf("\nDigite um numero (nao negativo): ");
            scanf("%le",&n);

            if(n < 0)
                printf("\nn deve ser um numero nao negativo!!!\n");
        } while (n < 0);

        printf("\nf(%.0f) = %.0f\n",n, funcao(n));
  
        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
