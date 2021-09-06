/*
Arquivo: ex03_06.c
Modificado em 06/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Escreva uma função chamada teste que recebe um valor inteiro positivo n como parâmetro. Sua função deve retornar um valor inteiro b tal que b^k = n para algum inteiro k, e b seja o menor possível.
*/

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

void teste(double x)
{
    double k,kj,b,bj;
    int encerra_loop;


    bj = 1;
    for(b = 1; b <= bj; b++)
    {
        kj = 0;
        encerra_loop = 0;
        for(k = 0; k <= kj; k++)
        {
            if(b == 1)
            {
                if(x == 1)
                {
                    printf("\n %.0f^%.0f = %.0f ", b,k,pow(b,k));
                    encerra_loop = 1;
                }
                break;
            }
            else
            {
                if(pow(b,k) == x)
                {
                    printf("\n %.0f^%.0f = %.0f ", b,k,pow(b,k));
                    encerra_loop = 1;
                    break;
                }
                else if(pow(b,k) > x)
                {
                    printf("\n %.0f^%.0f", b,k);
                    break;
                }
                else
                {
                    kj++;
                }
            }

        }
        if(encerra_loop == 1)
           break;
        else
           bj++;
    }
    printf("\n\n");
      
}


int main()
{
    // Início do programa
    double n;
    char sair;
    do
    {
        printf("\n\nb^k = n. Qual e' o menor b?\n");
        printf("===========================\n");

        do
        {
            printf("\nDigite um numero inteiro positivo: ");
            scanf("%le",&n);
            if(n <= 0)
               printf("\nNumero DEVE ser MAIOR que ZERO !!!\n\n");
        } while (n <= 0);

        teste(n);

        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
