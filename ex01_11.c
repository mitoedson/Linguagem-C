/*
Arquivo: ex01_11.c
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
    float la,lb,lc,sp,area;
    printf("\n\t\t==========  Aula 01 - Ex.11  =========");
    printf("\n\t\t==== Calculo da area do triangulo ====\n\n");

    printf("Ola. Este programa calculara a area do triangulo utilizando a formula de Heron.\n\n");
    printf("Por favor digite:\n");
    printf("================\n");
    do{
    printf("O comprimento do lado a (em m): ");
    scanf("%f",&la);
    if(la<=0) 
        printf("Valor deve ser maior que ZERO!!!\n");
   } while(la<=0);

    do{
    printf("O comprimento do lado b (em m): ");
    scanf("%f",&lb);
    if(lb<=0) 
        printf("Valor deve ser maior que ZERO!!!\n");
    } while(lb<=0);

    do{
    printf("O comprimento do lado c (em m): ");
    scanf("%f",&lc);
    if(lc<=0) 
        printf("Valor deve ser maior que ZERO!!!\n");
    } while(lc<=0);

    sp=(la+lb+lc)/2;
    printf("\nA area do triangulo eh %.2f metros quadrados.\n\n", sqrt(sp*(sp-la)*(sp-lb)*(sp-lc)));
  
    return 0;
    // Fim do programa
}
