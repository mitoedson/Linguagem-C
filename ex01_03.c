/*
Arquivo: ex01_03.c
Codificado em 28/08/2021, por Edson Mito.
Modificado em: 29/08/2021.
SO: Linux Mint
Compilador GCC

Descrição: Exercício básico para cálculo de área do círculo, e seu perímetro, ao qual o usuário irá introduzir um valor: o comprimento do raio do círculo, e receberá um resultado (área do círculo).
Considere pi = 3.14 
*/

#include <stdio.h> // biblioteca  de entrada e saida de dados
#include <math.h> // biblioteca matemática

int main() // Função principal
{
    // Início do programa
    float raio;
    printf("\n\t\t============  Aula 01 - Ex.03  ===========");
    printf("\n\t\t= Calculo da area e perimetro do circulo =\n\n");

    printf("Insira o comprimento do raio do circulo (em m): ");
    scanf("%f",&raio);

    printf("\nA area do circulo de raio %.2f tem %.2f metros quadrados, e %.2f metros de perimetro (pi = 3.14 m).\n\n.", raio,3.14*raio*raio, 2*3.14*raio);
  
    return 0;
    // Fim do programa
}
