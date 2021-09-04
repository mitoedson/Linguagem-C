/*
Arquivo: ex03_01b.c
Modificado em 04/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Use a função anterior e crie um programa que imprima todas as potências: 2 0 , 2 1 , . . . , 2 10 , 3 0 , . . . , 10 10
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


double potencia(int x, int y)
{
    int i,negativo;
    double base = x;
    if(y == 0)
    {
        return 1;
    }
    else 
    {
        negativo=0;
        if(y < 0)
        {
            y*=-1;
            negativo=1;
        }

        for(i = 1;i <= y;i++)
        {
            if(i == 1)
                x = x * i;
            else
                x *= base;
        }

        if(negativo == 1)
            return (1/x);
        else
            return x;
    }
}

int main()
{
    // Início do programa
    int j,k;
    char sair;
    do
    {
        printf("\n\nImprime potencias de base 2 a 10, com expoente de 0 a 10\n");
        printf("========================================================\n");

        printf("\n");
        for(j = 2; j <= 10; j++)
        {
            for(k = 0; k <= 10; k++)
            {
                printf("%d^%d = ",j,k);
                if(potencia(j,k) < 0)
                    printf(" ERRO ");
                else
                    printf("%.0lf ",potencia(j,k));
            }
               printf("\n\n");
  
       }

        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);
    } while (toupper(sair) != 'S');
 
    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
