/*
Arquivo: ex02_03.c
Modificado em 31/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Faça um programa que lê um número n e que compute e imprima o valor. Índice inicial i, índice final n, termo de somatório i. i=1. Obs: Não use fórmulas como a da soma de uma P.A..

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
        printf("\n\nCalculando a soma de um numero n.\n");
        printf("=================================\n");

        printf("\nIndice inicial: 1, indice final: n, termo de somatorio: 1\n");
        do
        {
            printf("\nDigite o valor de n (inteiro positivo): ");
            scanf("%d",&n);
            if(n < 1)
                printf("\nValor de n NAO PODE ser menor que 1 !!!\n");
        } while (n < 1);

        s = 0;
        for(i=1;i<=n;i++)
            s = s + i;
        printf("\nO resultado eh %d.", s);

        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
