/*
Arquivo: ex01_12.c
Modificado em 29/08/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Programa verifica se um número inteiro é par, ou não, e se é maior, menor ou igual a 100. Enunciado modificado a partir de um exercício da UFABC, que pedia para o aluno verificar se o código estava correto.

Código original:
#include <stdio.h>
int main() {
int a;
printf("Digite um número inteiro:");
scanf("%d", &a);
if (( a % 2 == 0) && (a < 100))
printf("O número é par e menor que 100\n");
else if (a >= 100)
printf("O número é par e maior ou igual a 100\n");
if ((a % 2 != 0) && (a < 100))
printf("O número é ímpar e menor que 100\n");
else if (a >= 100)
printf("O número é ímpar e maior que 100\n");
return 0;
}
*/

#include <stdio.h> // biblioteca  de entrada e saida de dados

int main() // Função principal
{
    // Início do programa
    int a;
    printf("Digite um numero inteiro:");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        if(a < 100)
           printf("O numero eh par, e menor que 100\n");
        else
            printf("O numero eh par, e maior ou igual a 100\n");
    }
    else
    {
        if (a < 100)
            printf("O numero eh impar, e menor que 100\n");
        else
            printf("O numero eh impar, e maior que 100\n");
    }
  
    return 0;
    // Fim do programa
}
