/*
Arquivo: ex02_11.c
Modificado em 03/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Elabore um programa em C para computar a raiz quadrada de um número positivo. Use a ideia abaixo, baseada no método de aproximações sucessivas de Newton. O programa deverá imprimir o valor da vigésima aproximação.
*/

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // Início do programa
    int i;
    double Y,x1,xp,xa;
    char sair;
    do
    {
        printf("\n\nRaiz quadrada pelo metodo de aproximacao de Newton\n");
        printf("==================================================\n");

        do
        {
            printf("\nDigite um numero positivo: ");
            scanf("%lg",&Y);
            if(Y <= 0)
               printf("\nPrimeiro numero DEVE ser MAIOR que ZERO !!!\n\n");
        } while (Y <= 0);

        xp = 0;
        xa = 0;    
        x1 = Y / 2;
        for(i = 1; i < 20; i++)
        {
            if(i == 1)
                xa = x1;

            xp = xa - ((pow(xa,2)-Y)/(2*xa));
            xa = xp;

        }

        printf("\nA raiz quadrada de %lg eh %lg ",Y,xp);  
        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
