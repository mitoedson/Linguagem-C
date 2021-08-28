/* Exercício básico que solicita ao usuário inserir dois valores numéricos, e o programa verifica qual dos valores é maior.

SO: Linux Mint
Compilador GCC
*/

#include <stdio.h> // biblioteca  de entrada e saida de dados
#include <math.h> // biblioteca matemática

int main() // Função principal
{
    // Início do programa
    float v1=0,v2=0;
    printf("\n\t\t==========  Aula 01 - Ex.04  ==========");
    printf("\n\t\t==== Verifica qual numero e o maor ====\n\n");

    printf("Ola. Eu irei verificar dentre dois numeros qual e o maior.");
    printf("\n\nPor favor digite o primeiro numero: ");
    scanf("%f",&v1);
    printf("\nPor favor digite o segundo numero: ");
    scanf("%f",&v2);

    if(v1 > v2)
        printf("\nO numero %.2f e maior que o numero %.2f", v1,v2);
    else
        if(v1 < v2)
            printf("\nO numero %.2f e maior que o numero %.2f", v2,v1);
        else
            printf("\nOs dois numeros sao iguais !!!");

    printf("\n\n");
    return 0;
    // Fim do programa
}
