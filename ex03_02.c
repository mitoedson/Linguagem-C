/*
Arquivo: ex03_03.c
Modificado em 04/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Escreva uma função que computa o fatorial de um número inteiro n passado por parâmetro. Obs.: Caso n <= 0 a função deve retornar 1. Use a função anterior e crie um programa que imprima os valores de n! para n = 1, . . . , 20.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int fatorial(int x)
{
    int i,base=1;
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
    int n;
    char sair;
    do
    {
        printf("\n\nFatorial de um numero natural\n");
        printf("=============================\n");

        do
        {
            printf("\nDigite um valor natural: ");
            scanf("%d",&n);
            if(n<0)
                printf("\nValor NAO DEVE ser menor que ZERO!!!\n");
            if(n>170)
                printf("\nValor MAXIMO e' 170!!!\n");
        } while(n<0 || n > 170);

        printf("\n\n %d! = ",n);
        if(fatorial(n) < 0)
            printf("ERRO!");
        else
            printf("%d",fatorial(n));

        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);
    } while (toupper(sair) != 'S');
 
    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
