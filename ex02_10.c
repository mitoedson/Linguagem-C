/*
Arquivo: ex02_10.c
Modificado em 03/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Escreva um programa para ler n de números do tipo float e imprimir quantos deles estão nos seguintes intervalos: [0 . . . 25], [26 . . . 50], [51 . . . 75] e [76 . . . 100].
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    // Início do programa
    int i,n,i1,i2,i3,i4,i5;
    float numeros;
    char sair;
    do
    {
        printf("\n\nClassificar numeros entre intervalos\n");
        printf("====================================\n");

            do
            {
                printf("\nDigite quanto numeros deseja digitar sequencialmente: ");
                scanf("%d",&n);
                if(n <= 0)
                    printf("\nPrimeiro numero DEVE ser MAIOR que ZERO !!!\n\n");
            } while (n <= 0);

            i1=0;i2=0;i3=0;i4=0;i5=0;
            printf("\n\nDigite:\n=======\n\n");
            for(i = 1; i <= n; i++)
            {
                printf("#(%d de %d): ",i,n);
                scanf("%f",&numeros);
                if(numeros >= 0 && numeros <= 25)
                    i1++;
                else if(numeros >= 26 && numeros <= 50)
                    i2++;
                else if(numeros >= 51 && numeros <= 75)
                    i3++;
                else if(numeros >= 76 && numeros <= 100)
                    i4++;
                else
                    i5++;
            }               
        printf("\n\nIntervalo [0..25]: %d",i1);
        printf("\nIntervalo [26..50]: %d",i2);
        printf("\nIntervalo [51..75]: %d",i3);
        printf("\nIntervalo [76..100]: %d",i4);
        printf("\nFora do Intervalo: %d",i5);

        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
