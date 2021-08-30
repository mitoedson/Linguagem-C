/*
Arquivo: ex01_16.c
Modificado em 30/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Programa solicita que seja digitado um valor digitado, e o programa fará a conversão de temperatura, ou em Celsius, ou em Fahrenheit.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    // Início do programa
    char escala;
    float t;
    int repete=0;
    printf("\n\t\t=====  Aula 01 - Ex.16  =====");
    printf("\n\t\t= Conversao de Temperaturas =\n");

    printf("\nEste programa fara a conversao de temperatura, a partir de sua escolha");

    printf("\n\nPor favor, escolha a escala inicial:");
    printf("\n====================================\n");
    do
    {
        printf("\nCelsius (C), Fahrenheit (F) ou Kelvin (K)? ");
        scanf(" %c",&escala);
        if(toupper(escala)!='C' && toupper(escala)!='F' && toupper(escala)!='K')
            printf("\nOpcao invalida!!!\n");
     } while(toupper(escala)!='C' && toupper(escala)!='F' && toupper(escala)!='K');

    printf("\n\nPor favor, digite:");
    printf("\n==================\n");
    printf("\nO valor da temperatura: ");
    scanf("%f",&t);
    if(toupper(escala)=='C')
    {
        printf("\nCelsius: %.2f C", t);
        printf("\nFahrenheit: %.2f F", (t*1.8+32));
        printf("\nKelvin: %.2f K", t+273.15);
    }
    else if(toupper(escala)=='F')
    {
        printf("\nFahrenheit: %.2f F", t);
        printf("\nCelsius: %.2f C", (t-32)/1.8);
        printf("\nKelvin: %.2f K", (t-32)/1.8+273.15);
    }
    else
    {
        printf("\nKelvin: %.2f K", t);
        printf("\nFahrenheit: %.2f F", ((t-273.15)*1.8+32));
        printf("\nCelsius: %.2f C", t-273.15);
    }



    printf("\n\n");
    return 0;
    // Fim do programa
}
