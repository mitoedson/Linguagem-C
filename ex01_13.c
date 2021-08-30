/*
Arquivo: ex01_13.c
Modificado em 30/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Programa verifica se o ano digitado é bissexto ou não.
*/

#include <stdio.h> // biblioteca  de entrada e saida de dados

int main() // Função principal
{
    // Início do programa
    int ano;
    printf("\n\t\t==========  Aula 01 - Ex.13  =========");
    printf("\n\t\t==== Ano bissexto ou nao bissexto ====\n\n");

    do
    {
        printf("\nPor favor, digite o ano: ");
        scanf("%d",&ano);
        if(ano<0)
            printf("\nANO INVALIDO!!!\n\n");
        else
        {
            if((ano%4)==0 && (ano%100)!=0)
                printf("\nEh um ano bissexto!!!\n\n");
            else if((ano%400)==0)
                printf("\nEh um ano bissexto!!!\n\n");
            else
                printf("\nNao eh um ano bissexto!!!\n\n");
       } 
   } while(ano<0);

    return 0;
    // Fim do programa
}
