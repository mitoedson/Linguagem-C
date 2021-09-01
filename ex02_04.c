/*
Arquivo: ex02_04.c
Modificado em 01/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Faça um programa que lê um número n e imprima os valores entre 2 e
n que são divisores de n.

Fonte: Listas dos Prof. Emílio Francesquini e Carla Negri Lintzmayer, UFABC.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    // Início do programa
    int i,n,s;
    char sair;
    do
    {
        printf("\n\nDivisores de um numero n.\n");
        printf("=========================\n");

        printf("\nVerifica os divisores de um numero inteiro n.\n");
        do
        {
            printf("\nDigite o valor de n (maior que 1): ");
            scanf("%d",&n);
            if(n <= 2)
                printf("\nValor de n NAO PODE ser menor ou igual a 1 !!!\n");
        } while (n <= 1);

        printf("\nD(%d)={1", n);
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
                printf(",%d", i);
        }
        printf("}");

        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
