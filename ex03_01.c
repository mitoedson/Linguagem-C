/*
Arquivo: ex03_01.c
Modificado em 04/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Escreva uma função que computa a potência a b para valores a (double) e b (int) passados por parâmetro (não use bibliotecas como math.h).
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


double potencia(double x, int y)
{
    int i,negativo;
    double base = x;
    if(y == 0)
    {
        return 1;
    }
    else 
    {
        negativo=0;
        if(y < 0)
        {
            y*=-1;
            negativo=1;
        }

        for(i = 1;i <= y;i++)
        {
            if(i == 1)
                x = x * i;
            else
                x *= base;
        }

        if(negativo == 1)
            return (1/x);
        else
            return x;
    }
}

int main()
{
    // Início do programa
    double a;
    int b;
    char sair;
    do
    {
        printf("\n\nCalcular potencias de valores dados pelo usuario\n");
        printf("================================================\n");

        printf("\nDigite o valor da base: ");
        scanf("%le",&a);
        printf("\nDigite o valor do expoente (numero inteiro): ");
        scanf("%d",&b);

        printf("\nO valor de (%f)^%d = %f",a,b,potencia(a,b));

        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);
    } while (toupper(sair) != 'S');
 
    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
