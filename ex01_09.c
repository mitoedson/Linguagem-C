/*
Arquivo: ex01_09.c
Codificado em 29/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Faça um programa que leia dois valores inteiros nas variáveis x e y e
troque o conteúdo as variáveis. Refaça este problema sem o uso de
outras variáveis que não x e y.
*/

#include <stdio.h> // biblioteca  de entrada e saida de dados
#include <math.h> // biblioteca matemática

int main() // Função principal
{
    // Início do programa
    int x=0,y=0,z=0;
    printf("\n\t\t==========  Aula 01 - Ex.08  =========");
    printf("\n\t\t== Trocando o conteudo de variaveis ==\n\n");

    printf("\nPor favor, digite:");
    printf("\n=================\n");
    printf("O valor de x: ");
    scanf("%d",&x);
    printf("O valor de y: ");
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("\nx=%d, y=%d\n\n",x,y);

    return 0;
    // Fim do programa
}
