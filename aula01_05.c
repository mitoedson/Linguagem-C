/* Exerc�cio b�sico que solicita ao usu�rio inserir dois valores num�ricos inteiros, e o programa verifica a diferen�a entre eles.

SO: Linux Mint
Compilador GCC
*/

#include <stdio.h> // biblioteca  de entrada e saida de dados
#include <math.h> // biblioteca matem�tica

int main() // Fun��o principal
{
    // In�cio do programa
    int v1=0,v2=0;
    printf("\n\t\t=====================  Aula 01 - Ex.05  =====================");
    printf("\n\t\t=== Verifica qual a diferenca entre dois valores inteiros ===\n\n");

    printf("Ola. Eu irei verificar dentre dois numeros inteiros, qual a diferenca entre eles");
    printf("\n\nPor favor digite o primeiro numero inteiro: ");
    scanf("%d",&v1);
    printf("\nPor favor digite o segundo numero inteiro: ");
    scanf("%d",&v2);

    if(v1 > v2)
        printf("\nA diferenca entre %d e %d eh %d", v1,v2,v1-v2);
    else
        if(v1 < v2)
            printf("\nA diferenca entre %d e %d eh %d", v1,v2,v2-v1);
        else
            printf("\nOs dois numeros sao iguais !!!");

    printf("\n\n");
    return 0;
    // Fim do programa
}
