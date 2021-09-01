/*
Arquivo: ex02_06.c
Modificado em 01/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Considere o programa para determinar se uma sequência de n números digitados pelo usuário está ordenada ou não. Faça o programa usando uma variável contadora.

Fonte: Listas dos Prof. Emílio Francesquini e Carla Negri Lintzmayer, UFABC.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    // Início do programa
    int i,n,atual,anterior,crescente,decrescente;
    char sair;
    do
    {
        printf("\n\nVerificador de sequencia de numeros\n");
        printf("===================================\n");

        printf("\nPrograma verifica se uma sequencia n de numeros estah ordenada\n");
        do
        {
            printf("\nDigite a quantidade de numeros a ser digitada: ");
            scanf("%d",&n);
            if(n <= 1)
                printf("\nValor de n DEVE ser maior que 1 !!!\n");
        } while (n <= 1);

        crescente = 0;
        decrescente = 0;
        printf("\nDigite a sequencia de %d numero(s):",n);
        printf("\n===================================\n");
        for(i=1;i<=n;i++)
        {
            printf("\n(%d de %d): ",i,n);
            scanf("%d",&atual);

            /* CRESCENTE OU DECRESCENTE?*/
            if(i>1)             
            {
                if((atual < anterior))
                    decrescente++;                   
                if((atual > anterior))
                    crescente++;                   
            }                
            anterior=atual;                      
        }

        if(crescente==0 || decrescente==0)
        {
            printf("\n\nOs numeros ESTAO digitados na ordem ");
            if(crescente==0)
                printf("DECRESCENTE.");
            else
                printf("CRESCENTE.");
        }
        else
            printf("\n\nOs numeros NAO ESTAO digitados na ordem crescente, nem decrescente.");

        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
