Recursividade são funções, em C, que podem chamar a si mesmas. No entanto, ela deve ser evitada assim que possível, pois ela pode consomir muita memória se utilizada muitas vezes.

<p><b>ex03_01.c</b> e <b>ex03_01b.c</b><br>
Escreva uma função que computa a potência a b para valores a (double) e b (int) passados por parâmetro (não use bibliotecas como math.h). Use a função anterior e crie um programa que imprima todas as potências: 2 0 , 2 1 , . . . , 2 10 , 3 0 , . . . , 10 10.
  
<p><b>ex03_02.c</b> e <b>ex03_02b.c</b><br>    
Escreva uma função que computa o fatorial de um número inteiro n passado por parâmetro. Obs.: Caso n <= 0 a função deve retornar 1. Use a função anterior e crie um programa que imprima os valores de n! para n = 1, . . . , 20.
                                                                                                        
<p><b>ex03_03.c</b><br>
Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o primeiro número da série de Fibonacci que é maior ou igual a n. 
<p>
Desenvolvimento: para este exercício, eu utilizei signed long int para as variáveis, e vez do int (que me deixou bem limitado), e estabeleci um limite máximo de 1836311902, que é até onde o programa suporta. O valor máximo que encontrou como número de Fibonacci foi 1836311903. O cálculo foi bem rápido para quem está programando com um Pentium 4, num ambiente Linux de 32 bits.
  
<p><b>ex03_04.c</b><br>
Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o maior número primo que é menor ou igual a n. 
<p>
Desenvolvimento: eu utilizei o mesmo princípio do exercício ex02_08.c, mas com signed long int (que permite-me ir de -2147483648 até 2147483647, mas creio que não conseguirá atingir o limite sem dar erro). Porém números muito grandes deixam a análise muito lenta (ainda mais que eu estou utilizando um Pentium 4). Eu testei com n = 1000000, e levou um longo tempo para verificar que ele está entre os números primos 999983 e 1000003. Imagine 2 bilhões quanto tempo eu levaria para processar.
