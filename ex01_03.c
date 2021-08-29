/*
Arquivo: ex01_03.c
Codificado em 28/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Exercício básico para cálculo de área do cícrulo, ao qual o usuário irá introduzir um valor: o comprimento do raio do círculo, e receberá um resultado (área do círculo).
Considere raio = 3.14 
*/

#include <stdio.h> // biblioteca  de entrada e saida de dados
#include <math.h> // biblioteca matemática

int main() // Função principal
{
    // Início do programa
    float raio;
    printf("\n\t\t==========  Aula 01 - Ex.03  =========");
    printf("\n\t\t===== Calculo da area do circulo =====\n\n");

    printf("Insira o comprimento do raio do circulo (em m): ");
    scanf("%f",&raio);

    printf("\nA area do circulo sera %.2f ", 3.14*raio*raio);
    printf("metros quadrados (raio = 3.14 m).\n\n");
  
    return 0;
    // Fim do programa
}
