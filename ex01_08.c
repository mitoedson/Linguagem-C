/*
Arquivo: ex01_08.c
Codificado em 29/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Faça um programa que leia um número real x e calcule o valor de
f(x) = x^(1/2) + (x/2) + x^x.
*/

#include <stdio.h> // biblioteca  de entrada e saida de dados
#include <math.h> // biblioteca matemática

double main() // Função principal
{
    // Início do programa
    float x=0,saida=0;
    printf("\n\t\t==========  Aula 01 - Ex.08  =========");
    printf("\n\t\t=========  Calculo de funcao =========\n\n");

    printf("Calculando a funcao f(x) = x^(1/2) + (x/2) + x^x");
    printf("\n\nPor favor, digite:");
    printf("\n=================\n");
    printf("O valor de x: ");
    scanf("%f",&x);

    saida=sqrt(x)+(x/2)+pow(x,x);
    printf("\nf(%.3f)= %.3f\n\n",x,saida);

    return 0;
    // Fim do programa
}
