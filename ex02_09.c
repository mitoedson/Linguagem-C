/*
Arquivo: ex02_09.c
Modificado em 03/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Programa que calcula o MMC de dois números naturais não nulos.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    // Início do programa
    int n1,n2,i,j,mmc,pula,encerra_loop;
    char sair;
    do
    {
        printf("\n\nMMC de dois numeros naturais nao nulos\n");
        printf("======================================\n");


            /* Variável n1 */
            do
            {
                printf("\nDigite o primeiro numero: ");
                scanf("%d",&n1);
                if(n1 <= 0)
                    printf("\nPrimeiro numero DEVE ser MAIOR que ZERO !!!\n");
            } while (n1 <= 0);

            /* Variável n2 */
            do
            {
                printf("\nDigite o segundo numero: ");
                scanf("%d",&n2);
                if(n2 <= 0)
                    printf("\nSegundo numero DEVE ser MAIOR que ZERO !!!\n");
            } while (n2 <= 0);

        printf("\nMMC(%d,%d) = ",n1,n2);
 
        encerra_loop = 0;
        j = 2;    
        mmc = 1;
        for(i = 2; i <= j; i++)
        {
            if(j % i == 0)
            {
                if(j / i == 1)
                {
                // INICIO: ANALISA MMC

                    pula = 0;
                    do
                    {
                        if((n1 % j != 0) && (n2 % j != 0))
                        {
                            pula = 1;
                        }
                        else if((n1 % j == 0) || (n2 % j == 0))
                        {
                            mmc *= j;
                            if(n1 % j == 0)
                                n1 = n1 / j;
                            if(n2 % j == 0)
                                n2 = n2 / j;
                        }
                    } while (pula != 1);

                    if(n1 == 1 && n2 == 1)
                        encerra_loop = 1;
                // FIM: ANALISA MMC

                }
                if(encerra_loop != 1)
                {
                    j++;
                    i = 1;
                }
                else
                {
                    break;
                }
            }
        }      

      printf("%d ", mmc);
 
        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
