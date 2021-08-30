/*
Arquivo: ex01_14.c
Modificado em 30/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Programa classifica triângulos a partir de lados digitados pelo usuário.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // Início do programa
    float l1,l2,l3,sp;
    int repete=0;
    printf("\n\t\t==========  Aula 01 - Ex.14  =========");
    printf("\n\t\t==== Classificacao de triangulos =====\n");

    printf("\nEste programa fara a classificacao do triangulo, a partir dos valores digitados dos comprimentos dos lados.");
    printf("\n\nPor favor, digite os comprimentos de cada lado:");
    printf("\n===============================================\n");

    do
    {

        do
        {
            printf("O primeiro lado: ");
            scanf("%f",&l1);
        } while(l1 <= 0);

        do
        {
            printf("O segundo lado: ");
            scanf("%f",&l2);
        } while(l2 <= 0);

        do
        {
            printf("O terceiro lado: ");
            scanf("%f",&l3);
        } while(l3 <= 0);

        sp=(l1+l2+l3)/2;
        if((sp*(sp-l1)*(sp-l2)*(sp-l3)) <= 0)
            printf("\nValores incorretos para um triangulo!!!\n\n");
    } while((sp*(sp-l1)*(sp-l2)*(sp-l3)) <= 0);

    if(l1==l2)
       repete++;
    if(l1==l3 || l2==l3)
       repete++;

    if(repete==0)
        printf("\nEh um triangulo ESCALENO!!!\n\n");
    else if(repete==1)
        printf("\nEh um triangulo ISOSCELES!!!\n\n");
    else
        printf("\nEh um triangulo EQUILATERO!!!\n\n");

    return 0;
    // Fim do programa
}
