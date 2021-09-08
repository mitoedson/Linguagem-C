/*
Arquivo: ex03_12.c
Modificado em 07/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Quais os valores de fun(3) e fun(7)?
*/

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int fun(int n)
{
    if (n < 4)
        return 3 * n;
    return 2 * fun(n-4) + 5;
}

int main()
{
    // Início do programa
    int a,b;
    char sair;
    do
    {
        printf("\n\nValores de fun(3) e fun(7)\n");
        printf("==========================\n");

//        printf("\nDigite um numero: ");
//        scanf("%d",&a);

//        printf("\nDigite um segundo numero: ");
//        scanf("%d",&b);

        printf("\n %d ",fun(3));
        printf("\n %d ",fun(7));
  
        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
