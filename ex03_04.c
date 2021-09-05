/*
Arquivo: ex03_04.c
Modificado em 05/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o maior número primo que é menor ou igual a n.
Fonte: Listas dos Prof. Emílio Francesquini e Carla Negri Lintzmayer, UFABC.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void primo(unsigned long int n)
{

    unsigned long int i,j,menor,maior;
    int encerra_loop,primo;

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
                    printf(" %ld ",j);
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

        if(menor == 0 && primo == 0)
            printf("\n\n%ld eh menor que o menor numero primo %ld.",n,maior);
        else if(primo == 1 && menor != 0)
            printf("\n\n%ld EH PRIMO, e estah entre os numeros primos %ld e %ld.",n,menor,maior);
        else if(primo == 1 && menor == 0)
            printf("\n\n%ld E' NUMERO PRIMO, e menor que o numero primo %ld.",n,maior);
        else if(primo == 0)
            printf("\n\n%ld estah entre os numeros primos %ld e %ld.",n,menor,maior);

}

int main()
{
    // Início do programa
    unsigned long int n;
    char sair;
    do
    {
        printf("\n\nNumeros primos e seus intervalos\n");
        printf("================================\n");

        do
        {
            printf("\nDigite um numero inteiro positivo: ");
            scanf("%ld",&n);
            if(n < 0)
                printf("\nNumero DEVE ser MAIOR OU IGUAL A ZERO !!!\n");
        } while (n < 0);

        primo(n);

        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
