/*
Arquivo: ex03_13.c
Modificado em 08/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Escreva uma função recursiva que imprima uma régua inglesa de ordem n no intervalo [0,2n]. Nessa régua, o traço no ponto médio deve ter comprimento n, os traços nos pontos médios dos subintervalos superior e inferior devem ter comprimento n-1, e assim por diante.
*/

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

void regua(int n)
{
    int i,j,k,l,total,corta_loop;

    total = pow(2,n) + 1;
    printf("\n");
    for(i = 1; i <= total; i++)
    {
        corta_loop = 0;
        printf(". ");
        if((i % 2) == 0)
        {
            printf("-\n");
        }
        else if(i == 1 || i == total)
        {
            printf("\n");
        }
        else
        {
            printf("-");
            for(j = 2; j <= n; j++)
            {
                for(k = 0; k <= total; k++)
                {
                    if(((pow(2,j)+2)/2 + (pow(2,j)*k)) == i)
                    {
                        for(l = 1; l <= (j-1); l++)
                        {
                            printf("-");
                        }
                        printf("\n");
                        corta_loop = 1;
                        break;
                    }
                    else if(((pow(2,j)+2)/2 + (pow(2,j)*k)) > i)
                    {
                            break;
                    }
                    if(corta_loop == 1)
                        break;
                }
                if(corta_loop == 1)
                    break;
            }
        }
    }
}

int main()
{
    // Início do programa
    int n;
    char sair;
    do
    {
        printf("\n\nRegua inglesa de valor n\n");
        printf("=========================\n");
        do 
        {
            printf("\nDigite o valor de n: ");
            scanf("%d",&n);
            if(n < 1)
                printf("\nn DEVE SER MAIOR QUE ZERO!!!\n");
        } while (n < 1);

        regua(n);
  
        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
