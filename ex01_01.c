#include <stdio.h> // biblioteca  de entrada e saida de dados
#include <math.h> // biblioteca matemática

int main() // Função principal
{
    // Início do programa
    float lado;
    printf("\n\t\t=========  Aula 01 - Ex.01  =========");
    printf("\n\t\t==== Calculo da area do quadrado ====\n\n");

    printf("Insira o comprimento do lado do quadrado (em m): ");
    scanf("%f",&lado);
    printf("\nA area do quadrado sera %.2f ", lado*lado);
    printf("metros quadrados.\n\n");
  
    return 0;
    // Fim do programa
}
