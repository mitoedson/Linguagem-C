/*
Arquivo: ex01_06b.c
Codificado em 28/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC
Descrição: Exercício básico que solicita ao usuário inserir três valores numéricos, e o programa ordena-os em ordem crescente .
*/

#include <stdio.h> // biblioteca  de entrada e saida de dados
#include <math.h> // biblioteca matemática

int main() // Função principal
{
    // Início do programa
    float v1=0,v2=0,v3=0,maior=0,menor=0,meio=0;
    int repete=0;
    printf("\n\t\t==========  Aula 01 - Ex.06b  ===========");
    printf("\n\t\t========== Ordenador de numeros =========\n\n");

    printf("Este programa organizara, em ordem crescente, os tres numeros digitados.");
    printf("\n\nPor favor digite:\n");
    printf("================\n");
    printf("O primeiro numero: ");
    scanf("%f",&v1);
    printf("\nO segundo numero: ");
    scanf("%f",&v2);
    if (v1 == v2)
    {
       maior=v1;
       meio=maior;
       repete++;
    }
    else if (v1 > v2)
    {
       maior = v1;
       meio = v2;
    }
    else
    {
       maior = v2;
       meio = v1;
    }
    printf("\nO terceiro numero: ");
    scanf("%f",&v3);
    if (v3 == maior)
    {
        menor=meio;
        meio=v3;
        repete++;    
    }
    else if (v3 > maior)
    {
        menor = meio;
        meio = maior;
        maior = v3;
    }
    else if (v3 > meio)
        {
           menor = meio;
           meio = v3;
        }
    else
    {
           menor = v3;
    }

    if(repete==2)
        printf("\nOs tres numeros sao iguais.\n\n");
    else
        printf("\nOs numeros ordenados em ordem crescente sao: %.2f, %.2f e %.2f.\n\n", maior,meio,menor);

    return 0;
    // Fim do programa
}
