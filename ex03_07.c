/*
Arquivo: ex03_07.c
Modificado em 06/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Escreva uma função chamada teste que recebe um valor inteiro n (positivo ou negativo) como parâmetro. Sua função deve imprimir todos os valores a e b (inclusive negativos) tais que a × b = n.
*/

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

void teste(double x)
{
    double a,b,ak,bk, encerra_loop;

    if(x != 0)
    {
        encerra_loop = 0;
        ak = 2;
        for(a = 1; a <= ak; a++)
        {
            bk = 2;
            for(b = 1; b <= bk; b++)
            {
                // printf("\n%.0f * %.0f = %.0f",a,b,a*b);
                if((a*b) == abs(x))
                {
                    if(x > 0)
                    {
                        printf("\n(%.0f) * (%.0f) = %.0f",a,b,a*b);
                        printf("\n(-%.0f) * (-%.0f) = %.0f",a,b,(-1)*a*(-1)*b);
                    }
                    else if(x < 0)
                    {
                        printf("\n(%.0f) * (-%.0f) = %.0f",a,b,a*(-1)*b);
                        printf("\n(-%.0f) * (%.0f) = %.0f",a,b,(-1)*a*b);
                    }
                    if(b == 1)
                        encerra_loop = 1; // Finaliza pesquisa
                    break;
                }
                else if((a*b) > abs(x))
                {
                    break;
                }
                else
                {
                    bk++;
                }
            }
            if(encerra_loop == 1)
                break;
            else
                ak++;
        }
    }
    else
    {
        printf("\nQualquer a e b inteiros, a*0=0 e b*0=0");
    }
}


int main()
{
    // Início do programa
    double n;
    char sair;
    do
    {
        printf("\n\na * b = n. Quais sao os valores de a e b?\n");
        printf("=========================================\n");

        printf("\nDigite um numero inteiro: ");
        scanf("%le",&n);

        teste(n);

        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
