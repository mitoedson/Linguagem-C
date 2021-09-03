/*
Arquivo: ex02_08.c
Modificado em 03/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Escreva um programa que lê um número n e então imprime o menor número primo que é maior ou igual n e imprime o maior primo que é menor ou igual a n.

Fonte: Listas dos Prof. Emílio Francesquini e Carla Negri Lintzmayer, UFABC.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    // Início do programa
    int n,i,j,menor,maior,encerra_loop,primo;
    char sair;
    do
    {
        printf("\n\nNumeros primos e seus intervalos\n");
        printf("================================\n");

        do
        {
            printf("\nDigite um numero (natural): ");
            scanf("%d",&n);
            if(n < 0)
                printf("\nPrimeiro numero DEVE ser MAIOR OU IGUAL A ZERO !!!\n");
        } while (n < 0);

        // INICIO: GERADOR DE NUMEROS PRIMOS
        menor = 0;
        maior = 0;
        encerra_loop = 0;
        primo = 0;
        j = 2;    
        for(i = 2; i <= j; i++)
        {
            if(j % i == 0)
            {
                if(j / i == 1)
                {
                // INICIO: ANALISA INTERVALO n
                    if(n < j)
                    {
                        maior = j;
                        encerra_loop++;
                    }
                    else if(n > j)
                    {
                        menor = j;
                    }
                    else 
                    {
                        primo = 1;
                    }

                // FIM: ANALISA INTERVALO n
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
        // FIM: GERADOR DE NUMEROS PRIMOS

        if(menor == 0)
            printf("\n\n%d eh menor que o menor numero primo %d.",n,maior);
        else if(primo == 1)
            printf("\n\n%d EH PRIMO, e estah entre os numeros primos %d e %d.",n,menor,maior);
        else if(primo == 0)
            printf("\n\n%d estah entre os numeros primos %d e %d.",n,menor,maior);

        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
