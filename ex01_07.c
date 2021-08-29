/*
Arquivo: ex01_07.c
Codificado em 28/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Exercício básico para cálculo de média de quatro notas. 
*/

#include <stdio.h> // biblioteca  de entrada e saida de dados
#include <math.h> // biblioteca matemática

int main() // Função principal
{
    // Início do programa
    float n1=0,n2=0,n3=0,n4=0,media=0;
    printf("\n\t\t==========  Aula 01 - Ex.07  =========");
    printf("\n\t\t=====  Calculo de media de notas =====\n\n");

    printf("Ola. Irei calcular a media de quatro notas e preciso que digite cada uma delas.");
    printf("\n\nPor favor, digite:");
    printf("\n=================\n");
    
    do
    {
    printf("A primeira nota (entre 0 e 10): ");
    scanf("%f",&n1);
    }
    while(n1<0 || n1>10);

    do
    {
    printf("A segunda nota (entre 0 e 10): ");
    scanf("%f",&n2);
    }
    while(n2<0 || n2>10);

    do
    {
    printf("A terceira nota (entre 0 e 10): ");
    scanf("%f",&n3);
    }
    while(n3<0 || n3>10);

    do
    {
    printf("A quarta nota (entre 0 e 10): ");
    scanf("%f",&n4);
    }
    while(n4<0 || n4>10);

    media=(n1+n2+n3+n4)/4;
    printf("\nA media eh %.2f.\n\n",media);

    return 0;
    // Fim do programa
}
