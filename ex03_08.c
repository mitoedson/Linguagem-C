/*
Arquivo: ex03_08.c
Modificado em 07/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Escreva um algoritmo iterativo para avaliar a × b usando apenas adição, onde a e b são inteiros não negativos.
*/

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // Início do programa
    double a,b,ab,i;
    char sair;
    do
    {
        printf("\n\na * b (iterativo)\n");
        printf("=================\n");

        do
        {
            printf("\nDigite um numero (inteiro nao negativo) para a: ");
            scanf("%le",&a);

            if(a < 0)
                printf("\na deve ser um numero inteiro nao negativo!!!\n");
        } while (a < 0);

        do
        {
            printf("\nDigite um numero (inteiro nao negativo) para b: ");
            scanf("%le",&b);

            if(b < 0)
                printf("\nb deve ser um numero inteiro nao negativo!!!\n");
        } while (b < 0);

        ab = 0;
        for(i = 0; i <= b; i++)
        {
            if(b == 0)
                ab = a * i;
            else if(i != 0)
                ab += a;
        }
        printf("\n%.0f * %.0f = %.0f\n",a, b, ab);
  
        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
