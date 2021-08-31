/*
Arquivo: ex02_01.c
Modificado em 31/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Faça um programa que imprima um menu de 4 pratos na tela e uma quinta opção para sair do programa. O programa deve imprimir o prato solicitado. O programa deve terminar quando for escolhida a quinta opção.

Fonte: Listas dos Prof. Emílio Francesquini e Carla Negri Lintzmayer, UFABC.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void cabecalho()
{
    printf("\nMcLISTA LANCHES E REFEICOES EXPRESS LTDA.");
    printf("\n=========================================\n");
}

void menu()
{
    printf("\n----------------------------");
    printf("\nPor favor, escolha sua opcao");
    printf("\n----------------------------\n");
    printf("[A] COMBO 1:\n    Prato principal: xxxxxx xxxxx xxxxx xx xxxx.\n    Bebida: yyyyyyy. Acompanhamento: zzz zz zzzz.");
    printf("\n\n[B] COMBO 2:\n    Prato principal: xxxxxxxxxxxx xx  xxxx xxxxxx.\n    Bebida: yyyyyyyy. Acompanhamento: zzz zz zzzz.");
    printf("\n\n[C] COMBO 3:\n    Prato principal: xxxx xxxxx xxxxx.\n    Bebida: yyy yyyyyyyyy. Acompanhamento: zzz zz zzzz.");
    printf("\n\n[D] COMBO 4:\n    Prato principal: xxxxxxxx xx xxxxx.\n    Bebida: yyyyyyyy yyyy yy. Acompanhamento: zzz zz zzzz.");
    printf("\n\n[S] Para sair do programa ");
}

int main()
{
    // Início do programa
    char opt,novo;
    int continuar;

    do
    {
        cabecalho();
        menu();
        scanf(" %c",&opt);
        if(toupper(opt) == 'A')
        {
            printf("\n\nCOMBO 1 ESCOLHIDO !!!");
            printf("\nPreco: R$ xx,xx\n");
        }
        else if(toupper(opt) == 'B')
        {
            printf("\n\nCOMBO 2 ESCOLHIDO !!!");
            printf("\nPreco: R$ xx,xx\n");
        }
        else if(toupper(opt) == 'C')
        {
            printf("\n\nCOMBO 3 ESCOLHIDO !!!");
            printf("\nPreco: R$ xx,xx\n");
        }
        else if(toupper(opt) == 'D')
        {
            printf("\n\nCOMBO 4 ESCOLHIDO !!!");
            printf("\nPreco: R$ xx,xx\n");
        }
        else if(toupper(opt) == 'S')
        {
            printf("\n\nENCERRANDO PROGRAMA !!!");
        }
        else
        {
           printf("\n\nOPCAO INVALIDA !!!");
        }

        if(toupper(opt) != 'S')
        {
            do
            {
            printf("\nCONFIRMAR PEDIDO? (S ou N) ");
            scanf(" %c",&novo);
            if(toupper(novo) == 'N')
            {
               printf("\n\nPEDIDO CANCELADO !!!");
//               getch();
            }
            else if(toupper(novo) == 'S')
            {
               printf("\n\nPEDIDO CONFIRMADO !!!");
//               getch();
            }
            else
               printf("\n\nOPCAO INVALIDA !!! \n\n");

            } while((toupper(novo) != 'S') && (toupper(novo) != 'N'));
        }
        
    } while((toupper(opt) != 'S'));


    printf("\n\n");
    return 0;
    // Fim do programa
}
