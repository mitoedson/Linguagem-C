/* Exercício básico que solicita ao usuário inserir três valores numéricos, e o programa verifica qual dos valores é maior.

SO: Linux Mint
Compilador GCC
*/

#include <stdio.h> // biblioteca  de entrada e saida de dados
#include <math.h> // biblioteca matemática

int main() // Função principal
{
    // Início do programa
    float v1=0,v2=0,v3=0,maior=0;
    int repete=0;
    printf("\n\t\t==========  Aula 01 - Ex.06  ===========");
    printf("\n\t\t==== Verifica qual numero e o maior ====\n\n");

    printf("Ola. Eu irei verificar dentre tres numeros qual e o maior.");
    printf("\n\nPor favor digite o primeiro numero: ");
    scanf("%f",&v1);
    printf("\nPor favor digite o segundo numero: ");
    scanf("%f",&v2);
    if (v1 == v2)
       {
       repete++;
       }
    if (v1 > v2)
       {
       maior = v1;
       }
    else
       {
       maior = v2;
       }
    printf("\nPor favor digite o terceiro numero: ");
    scanf("%f",&v3);
    if (v3 == maior)
       {
       repete++;
       }
    if (v3 > maior)
       {
       maior = v3;
       repete = 0;
       }

    if (repete == 2)
       {
       printf("\nOs tres numeros sao iguais.");
       }
    else
       {
       if (repete == 1)
          {
          printf("\nO maior numero eh o %.2f e repete duas vezes.", maior);
           }
       else
           {
           printf("\nO maior numero eh o %.2f.", maior);
           }
       }

    printf("\n\n");
    return 0;
    // Fim do programa
}
