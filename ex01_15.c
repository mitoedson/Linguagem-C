/*
Arquivo: ex01_15.c
Modificado em 30/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Programa que verifica a partir das coordenadas x e y, qual o quadrante se encontra a coordenada indicada.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // Início do programa
    float x,y;
    int repete=0;
    printf("\n\t\t==========  Aula 01 - Ex.15  =========");
    printf("\n\t\t====== Coordenadas e quadrantes ======\n");

    printf("\nEste programa verificara, a partir das coordenadas digitadas, qual o quadrante.");

    printf("\n\nPor favor, digite:");
    printf("\n==================\n");

    printf("O valor de x: ");
    scanf("%f",&x);
    printf("O valor de y: ");
    scanf("%f",&y);

    if(x > 0 && y > 0)
    {
        printf("\nOs valores correspondem ao PRIMEIRO QUADRANTE.");
    }
    else if(x < 0 && y > 0)
    {
        printf("\nOs valores correspondem ao SEGUNDO QUADRANTE.");
    }
    else if(x < 0 && y < 0)
    {
        printf("\nOs valores correspondem ao TERCEIRO QUADRANTE.");
    }
    else if(x > 0 && y < 0)
    {
        printf("\nOs valores correspondem ao QUARTO QUADRANTE.");
    }
    else if(x == 0)
    {
        if(y==0) 
            printf("\nEstah na ORIGEM!!!");
        else if(y>0)
            printf("\nEstah no eixo das ordenadas, entre o PRIMEIRO e o SEGUNDO QUADRANTE.");
        else
            printf("\nEstah no eixo das ordenadas, entre o TERCEIRO e o QUARTO QUADRANTE.");
    }
    else
    {
        if(x>0)
            printf("\nEstah no eixo das abscissas, entre o PRIMEIRO e o QUARTO QUADRANTE.");
        else
            printf("\nEstah no eixo das abscissas, entre o SEGUNDO e o TERCEIRO QUADRANTE.");
    }

    printf("\n\n");
    return 0;
    // Fim do programa
}
