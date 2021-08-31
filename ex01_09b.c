/*
Arquivo: ex01_09b.c
Codificado em 31/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Faça um programa que leia dois valores inteiros nas variáveis x e y e
troque o conteúdo as variáveis. Faça sem o uso de outras variáveis que não x e y.
*/

#include <stdio.h> // biblioteca  de entrada e saida de dados
#include <math.h> // biblioteca matemática

int main() // Função principal
{
    // Início do programa
    int x=0,y=0,z=0;
    printf("\n\t\t==============  Aula 01 - Ex. 09b  ==============");
    printf("\n\t\t=== Trocando o conteudo de variaveis inteiras ===\n\n");

    printf("\nPor favor, digite:");
    printf("\n=================\n");
    printf("O valor de x: ");
    scanf("%d",&x);
    printf("O valor de y: ");
    scanf("%d",&y);
//    x=x*y;y=x/y;x=x/y;
//    x^=y;y^=x;x^=y;
    x=x+y;y=x-y;x=x-y;

    printf("\nx=%d, y=%d\n\n",x,y);

    return 0;
    // Fim do programa
}
