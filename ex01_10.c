/*
Arquivo: ex01_10.c
Codificado em 29/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Cálculo de área do triangulo através de sua base a altura. 
*/

#include <stdio.h> // biblioteca  de entrada e saida de dados
#include <math.h> // biblioteca matemática

int main() // Função principal
{
    // Início do programa
    float base,altura;
    printf("\n\t\t==========  Aula 01 - Ex.10  =========");
    printf("\n\t\t==== Calculo da area do triangulo ====\n\n");

    printf("Insira o comprimento da base do triangulo (em m): ");
    scanf("%f",&base);

    printf("\nInsira o comprimento da altura do triangulo (em m): ");
    scanf("%f",&altura);

    printf("\nA area do tringulo eh %.2f ", (base*altura)/2);
    printf("metros quadrados.\n\n");
  
    return 0;
    // Fim do programa
}
