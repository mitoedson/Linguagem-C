/*
Arquivo: ex01_18.c
Modificado em 31/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Programa verifica dentre duas datas digitadas, qual é a maior cronologicamente.
*/

#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main()
{
    // Início do programa
    int d1,d2,m1,m2,a1,a2,ok,bissexto;
    printf("\n\t\t======  Aula 01 - Ex.18  ======");
    printf("\n\t\t= Comparar datas cronologicas =\n");

    printf("\nEste programa verifica dentre duas datas digitadas, qual e a maior cronologicamente");

    printf("\n\nPor favor, digite a primeira data:");
    printf("\n==================================\n");
    do
    {
        ok=1;
        printf("Dia (DD): ");
        scanf(" %d",&d1);
        printf("Mes (MM): ");
        scanf(" %d",&m1);
        if((d1 <= 0 || d1 > 31) || (m1 <= 0 || m1 > 12) || ((m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) && (d1 > 30)))
            ok = 0;
        do
        {
            printf("Ano (AAAA): ");
            scanf(" %d",&a1);
            if(a1 == 0)
                printf("Convencionalmente, ANO ZERO NAO EXISTE!!!\n\n");
        } while (a1 == 0);

        if(m1 == 2)
        {
            if((a1%4)==0 && (a1%100)!=0)
                bissexto=1;
            else if((a1%400)==0)
                bissexto=1;
            else
                bissexto=0;

            if(((d1 <= 0 || d1 > 29) && bissexto==1) || ((d1 <= 0 || d1 > 28) && bissexto==0)) 
                ok = 0;
        }

        if(ok==0)
           printf("\n%d/%d/%d EH UMA DATA INCORRETA!!!\n", d1,m1,a1);

     } while(ok == 0);


    printf("\n\nPor favor, digite a segunda data:");
    printf("\n=================================\n");
    do
    {
        ok=1;
        printf("Dia (DD): ");
        scanf(" %d",&d2);
        printf("Mes (MM): ");
        scanf(" %d",&m2);
        if((d2 <= 0 || d2 > 31) || (m2 <= 0 || m2 > 12) || ((m2 == 4 || m2 == 6 || m2 == 9 || m2 == 11) && (d2 > 30)))
            ok = 0;


        do
        {
            printf("Ano (AAAA): ");
            scanf(" %d",&a2);
            if(a2 == 0)
                printf("Convencionalmente, ANO ZERO NAO EXISTE!!!\n\n");
        } while (a2 == 0);

        if(m2 == 2)
        {
            if((a2%4)==0 && (a2%100)!=0)
                bissexto=1;
            else if((a2%400)==0)
                bissexto=1;
            else
                bissexto=0;

            if(((d2 <= 0 || d2 > 29) && bissexto==1) || ((d2 <= 0 || d2 > 28) && bissexto==0)) 
                ok = 0;
        }

        if(ok==0)
           printf("\n%d/%d/%d EH UMA DATA INCORRETA!!!\n", d2,m2,a2);

     } while(ok == 0);

    printf("\n\nDatas digitadas:");
    printf("\n================");
    printf("\nData 1: %d/%d/", d1,m1);
    if(a1 < 0)
        printf("%d (AC)", (-1*a1));
    else
        printf("%d ", a1);

    printf("\nData 2: %d/%d/", d2,m2);
    if(a2 < 0)
        printf("%d (AC)", (-1*a2));
    else
        printf("%d ", a2);


    if((d1+(m1*100)+(a1*10000)) > (d2+(m2*100)+(a2*10000)))
        printf("\n\nData 1 eh maior cronologicamente!!!");
    else if ((d1+(m1*100)+(a1*10000)) < (d2+(m2*100)+(a2*10000)))
        printf("\n\nData 2 eh maior cronologicamente!!!");
    else
        printf("\n\nAmbas as datas sao iguais!!!");

    printf("\n\n");
    return 0;
    // Fim do programa
}
