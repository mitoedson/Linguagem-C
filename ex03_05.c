/*
Arquivo: ex03_05.c
Modificado em 06/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Escreva uma função que recebe um número ponto flutuante n passado por parâmetro e devolve a raiz quadrada de n. Use o método de Newton, encontrando o zero da função: f(x)=x^2 - n
*/

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

void raiz(double x)
{
    int i;
    double x1,xp,xa;

    xp = 0;
    xa = 0;    
    x1 = x / 2;
    for(i = 1; i < 20; i++)
    {
        if(i == 1)
            xa = x1;

        xp = xa - ((xa*xa)-x)/(2*xa);
        xa = xp;
    }
    printf("\nA raiz quadrada de %lg eh %lg ",x,xp);  

}


int main()
{
    // Início do programa
    double n;
    char sair;
    do
    {
        printf("\n\nRaiz quadrada pelo metodo de aproximacao de Newton\n");
        printf("==================================================\n");

        do
        {
            printf("\nDigite um numero positivo: ");
            scanf("%lg",&n);
            if(n <= 0)
               printf("\nPrimeiro numero DEVE ser MAIOR que ZERO !!!\n\n");
        } while (n <= 0);

        raiz(n);

        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
