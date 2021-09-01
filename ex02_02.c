/*
Arquivo: ex02_02.c
Modificado em 31/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Faça um programa que lê dois números inteiros positivos a e b. Utilizando laços, o seu programa deve calcular e imprimir o valor a^b.

Fonte: Listas dos Prof. Emílio Francesquini e Carla Negri Lintzmayer, UFABC.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    // Início do programa
    int i,b,e,p;
    char sair;
    do
    {
        printf("\n\nCalculando a potencia de um numero, com a base e expoente inteiros.\n");
        printf("===================================================================\n");

        printf("\nDigite o valor da base: ");
        scanf("%d",&b);
        printf("\nDigite o valor do expoente: ");
        scanf("%d",&e);
        p = b;
        if(e!=0)
        {
            for(i=1;i<(abs(e));i++)
                p = p * b ;
            if(e > 0)
                printf("\nO valor de %d^%d eh %d",b,e,p);
            else
                printf("\nO valor de %d^%d eh %.4g",b,e,(double)1/p);
        }
        else
        {
            printf("\nO valor de %d^%d eh 1",b,e);
        }

        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
