/*
Arquivo: ex02_07.c
Modificado em 01/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Faça um programa em C que calcule o maximo divisor comum de dois numeros m e n. Voce deve utilizar a seguinte regra do calculo do mdc com m >= n: mdc(m, n) = m se n = 0; mdc(m, n) = mdc(n, m%n) se n > 0

Fonte: Listas dos Prof. Emílio Francesquini e Carla Negri Lintzmayer, UFABC.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    // Início do programa
    int n1,n2,i,j,mdc,pula;
    char sair;
    do
    {
        printf("\n\nMDC de dois numeros naturais\n");
        printf("============================\n");


        do
        {
            /* Variável n1 */
            do
            {
                printf("\nDigite o primeiro numero: ");
                scanf("%d",&n1);
                if(n1 < 0)
                    printf("\nPrimeiro numero DEVE ser MAIOR OU IGUAL A ZERO !!!\n");
            } while (n1 < 0);

            /* Variável n1 */
            do
            {
                printf("\nDigite o segundo numero: ");
                scanf("%d",&n2);
                if(n2 < 0)
                    printf("\nSegundo numero DEVE ser MAIOR OU IGUAL A ZERO !!!\n");
            } while (n2 < 0);

        if(n1 < n2)
            printf("\n\nPrimeiro numero deve ser MAIOR OU IGUAL ao segundo numero !!!\n\n");

        } while (n1 < n2);

        printf("\nMDC(%d,%d) = ",n1,n2);
        if(n2!=0)
        {
            n1=n1+n2;n2=n1-n2;n1=n1-n2;n2=n2%n1;
            printf("MDC(%d,%d) = ",n1,n2);
        }
        if(n2==0)      
        {
            printf("%d",n1);
        }
        else
        {
            mdc = 1;
                /* INICIO: GERADOR DE NUMEROS PRIMOS */
                j=2;
                for(i=2;i<=n1;i++)
                {
                    if((j%i)==0)
                    {
                        if((j/i)==1)
                        {

                            /* INICIO: ANALISA MDC */
                            pula = 0;
                            do
                            {
                                if(n1 % j != 0 && n2 % j != 0)
                                    pula = 1;
                                else if(n1%j == 0 && n2 % j == 0)
                                    mdc = mdc * j;
                                if(n1 % j == 0)
                                    n1 = n1 / j;
                                if(n2 % j == 0)
                                    n2 = n2 / j;
                            } while(pula != 1);
                            /* FIM: ANALISA MDC */

                        }
                        j++;
                        i=1;
                    }
                }
                /* FIM: GERADOR DE NUMEROS PRIMOS */

        printf("%d ", mdc);
        }
 
        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
