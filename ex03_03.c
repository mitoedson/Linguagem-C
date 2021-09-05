/*
Arquivo: ex03_03.c
Modificado em 05/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o primeiro número da série de Fibonacci que é maior ou igual a n.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


void fibonacci(signed long int n1)
{
    signed long int i,n;
    signed long int menor=0,maior=0;

    n = 1;
    for(i=1;i <= n; i++)
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
            printf("\n%.0ld esta' entre os numeros de Fibonacci %.0ld e %.0ld",n1,menor,maior);
            break;
        }
        else if(menor == n1 && n1 < maior)
        {
            printf("\n%.0ld e' um numero de Fibonacci e e' menor que o numero de Fibonacci %.0ld",n1,maior);
            break;
        }
        
        n++;
    // FIM: SAIDA
    }

}


int main()
{
    // Início do programa
    signed long int n;
    char sair;
    do
    {
        printf("\n\nNumero de Fibonacci ?\n");
        printf("=====================\n");

        printf("\nEste programa verifica qual o numero de Fibonacci maior que o numero digitado.");
        do
        {
            printf("\n\nDigite um numero inteiro positivo: ");
            scanf("%ld",&n);
            if(n <= 0)
                printf("\n\nO numero digitado DEVE SER POSITIVO!!! \n");
            if(n > 1836311902)
                printf("\n\nO valor digitado atingiu o LIMITE MAXIMO !!! \n");

        } while(n <= 0 || n > 1836311902);
 
        fibonacci(n);
 
        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);
    } while (toupper(sair) != 'S');
 
    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
