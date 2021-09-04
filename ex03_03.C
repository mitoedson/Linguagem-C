/*
Arquivo: ex03_03.c
Modificado em 04/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o primeiro número da série de Fibonacci que é maior ou igual a n.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


double fibonacci(int n1)
{
    int i;
    double menor=0,maior=0;

    for(i=1;i <= 100; i++)
    {
        if(i == 2)
            maior = 1 + menor;
        else
        {
            maior = maior + menor;
            menor = maior - menor;
            maior = maior - menor;
            maior = maior + menor;
        }
    // INICIO: SAIDA

        if(menor < n1 && n1 < maior)
        {
            printf("%d estah entre os numeros de Fibonacci %.0f e %.0f",n1,menor,maior);
            break;
        }
        else if(menor == n1 && n1 < maior)
        {
            printf("%d eh um numero de Fibonacci e eh menor que o numero de Fibonacci %.0f",n1,maior);
            break;
        }

    // FIM: SAIDA
    }
    return 0;
}


int main()
{
    // Início do programa
    int n;
    char sair;
    do
    {
        printf("\n\nNumero de Fibonacci ?\n");
        printf("=====================\n");

        printf("\nEste programa verifica qual o numero de Fibonacci maior que o numero digitado.");
        do
        {
            printf("\n\nDigite um numero inteiro positivo: ");
            scanf("%d",&n);
            if(n < 0)
                printf("\n\nO numero digitado DEVE SER POSITIVO!!! \n");
            if(n > 2000000000)
                printf("\n\nO valor digitado atingiu o LIMITE MAXIMO !!! \n");

        } while(n < 0 || n > 2000000000);
 
            fibonacci(n);
//      printf("%d",fibonacci(n));
 
        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);
    } while (toupper(sair) != 'S');
 
    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
