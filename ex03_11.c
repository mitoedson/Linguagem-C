/*
Arquivo: ex03_11.c
Modificado em 07/09/2021, por Edson Mito.
SO: Linux Mint
Compilador GCC

Descrição: Execute a função ff abaixo com os argumentos 7 e 0.

*/

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int ff(int n, int ind) {
  int i;
  for (i = 0; i < ind; i++)
    printf(" ");
    printf("ff(%d, %d)\n", n, ind);
  if (n == 1)
    return 1;
  if (n % 2 == 0)
    return ff(n/2, ind+1);
  return ff((n-1)/2, ind+1) + ff((n+1)/2, ind+1);
}  

int main()
{
    // Início do programa
    int a,b;
    char sair;
    do
    {
        printf("\n\nExecute a funcao ff com os argumentos.\n");
        printf("======================================\n");

//        printf("\nDigite um numero: ");
//        scanf("%d",&a);

//        printf("\nDigite um segundo numero: ");
//        scanf("%d",&b);

        printf("\n %d ",ff(7,0));
  
        printf("\n\nDigite 'S' para sair do programa. ");
        scanf(" %c",&sair);

    } while (toupper(sair) != 'S');

    printf("\n\nPROGRAMA ENCERRADO !!!");
    printf("\n\n");
    return 0;
    // Fim do programa
}
