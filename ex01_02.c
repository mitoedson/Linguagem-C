/*
Codificado em 28/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Exercício básico para cálculo de área do retângulo, ao qual o usuário irá introduzir dois valores: o comprimento da altura e da largura do retângulo), e receberá um resultado (área do retângulo). 
*/

#include <stdio.h> // biblioteca  de entrada e saida de dados
#include <math.h> // biblioteca matemática

int main() // Função principal
{
    // Início do programa
    float altura,largura;
    printf("\n\t\t==========  Aula 01 - Ex.02  =========");
    printf("\n\t\t==== Calculo da area do retangulo ====\n\n");

    printf("Insira o comprimento da altura do retangulo (em m): ");
    scanf("%f",&altura);

    printf("\nInsira o comprimento da largura do retangulo (em m): ");
    scanf("%f",&largura);

    printf("\nA area do retangulo sera %.2f ", altura*largura);
    printf("metros quadrados.\n\n");
  
    return 0;
    // Fim do programa
}
