Recursividade são funções, em C, que podem chamar a si mesmas. Pode ser muito útil ao realizar tarefas repetitivas. No entanto, ela deve ser utilizada com cuidado, pois ela pode consumir muita memória se utilizada muitas vezes.

<p><b>ex03_01.c</b> e <b>ex03_01b.c</b><br>
Escreva uma função que computa a potência a b para valores a (double) e b (int) passados por parâmetro (não use bibliotecas como math.h). Use a função anterior e crie um programa que imprima todas as potências: 2^0, 2^1, ..., 2^10, 3^0, ..., 10^10.
  
<p><b>ex03_02.c</b> e <b>ex03_02b.c</b><br>    
Escreva uma função que computa o fatorial de um número inteiro n passado por parâmetro. Obs.: Caso n <= 0 a função deve retornar 1. Use a função anterior e crie um programa que imprima os valores de n! para n = 1, . . . , 20.
<p>
Desenvolvimento: para este exercício, eu utilizei double para as variáveis, e vez do int, já que fatoriais costumam ficar muito grandes conforme o número escolhido. Eu consegui ir até 170! (o que já é um absurdo) sem dar "inf" no resultado. 170! =7257415615308004024601183389188649749759749301435088140661846389043400758951483763504074342688406564803011639450491273513831964209724198940185278587398284381652277192210462486140514580865463944054306265102820527269572213414150436315805283406248907007997446859463144884340521262595192251609771775240697806848.
<p>O outro exercício a saída resultou nos seguintes resultados:<br>
 1! = 1<br>
 2! = 2<br>
 3! = 6<br>
 4! = 24<br>
 5! = 120<br>
 6! = 720<br>
 7! = 5040<br>
 8! = 40320<br>
 9! = 362880<br>
 10! = 3628800<br>
 11! = 39916800<br>
 12! = 479001600<br>
 13! = 6227020800<br>
 14! = 87178291200<br>
 15! = 1307674368000<br>
 16! = 20922789888000<br>
 17! = 355687428096000<br>
 18! = 6402373705728000<br>
 19! = 121645100408832000<br>
 20! = 2432902008176640000
                                                                                                        
<p><b>ex03_03.c</b><br>
Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o primeiro número da série de Fibonacci que é maior ou igual a n. 
<p>
Desenvolvimento: para este exercício, eu utilizei signed long int para as variáveis, e vez do int (que me deixou bem limitado), e estabeleci um limite máximo de 1836311902, que é até onde o programa suporta. O valor máximo que encontrou como número de Fibonacci foi 1836311903. O cálculo foi bem rápido para quem está programando com um Pentium 4, num ambiente Linux de 32 bits.
  
<p><b>ex03_04.c</b><br>
Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o maior número primo que é menor ou igual a n. 
<p>
Desenvolvimento: eu utilizei o mesmo princípio do exercício ex02_08.c, mas com signed long int (que permite-me ir de -2147483648 até 2147483647, mas creio que não conseguirá atingir o limite sem dar erro). Porém números muito grandes deixam a análise muito lenta (ainda mais que eu estou utilizando um Pentium 4). Eu testei com n = 1000000, e levou um longo tempo para verificar que ele está entre os números primos 999983 e 1000003 (78499º número primo). Fico me perguntando se o programa consegue analisar o número 2 bilhões sem dar erro. Mesmo que dê para analisar, eu ainda estou pensando numa outra forma otimizar essa análise com um outro meio.

<p><b>ex03_05.c</b><br>
Escreva uma função que recebe um número ponto flutuante n passado por parâmetro e devolve a raiz quadrada de n. Use o método de Newton, encontrando o zero da função: f (x) = x^2 − n.
<p>
Desenvolvimento: este programa foi adaptado do exercício ex02_11.c.

<p><b>ex03_06.c</b><br>
Escreva uma função chamada teste que recebe um valor inteiro positivo n como parâmetro. Sua função deve retornar um valor inteiro b tal que b^k = n para algum inteiro k, e b seja o menor possível.
<p>
Desenvolvimento: eu considerei para o cálculo, k > = 0, já que n é um número inteiro positivo, e se k < 0, teríamos 1/(b^k), que é um número não inteiro. Como b inicia com 1, k inicia com 0. A interação é sequencial, e verifica se há igualdade na cálculo da potência, ou se o valor supera o valor de n. Se houver igualdade, o programa encerra. Se houver um valor maior que n, a interação será feita no b seguinte.
                                                                                                          
<p><b>ex03_07.c</b><br>                                                                                                       Escreva uma função chamada teste que recebe um valor inteiro n (positivo ou negativo) como parâmetro. Sua função deve imprimir
todos os valores a e b (inclusive negativos) tais que a × b = n.

<p><b>ex03_08.c</b><br>                                                                                                       
Escreva um algoritmo iterativo para avaliar a × b usando apenas adição, onde a e b são inteiros não negativos.
  
<p><b>ex03_09.c</b><br>                                                                                                       Escreva um algoritmo recursivo para avaliar a × b usando apenas adição, onde a e b são inteiros não negativos. 

<p><b>ex03_10.c</b><br>
Determine o que a seguinte definição recursiva para uma função f calcula. A definição da função f (válida para n>=0) é dada abaixo:  f(n)=0, se n=0. Caso contrário f(n)=n+f(n-1).
<p>
Saída obtida:<br>
f(0) = 0<br>
f(1) = 1<br>
f(2) = 3<br>
f(3) = 6<br>
f(4) = 10<br>
f(5) = 15<br>
f(6) = 21<br>
f(7) = 28<br>
f(8) = 36<br>
f(9) = 45<br>
f(10) = 55<br>
f(100) = 5050<br>
f(1000) = 500500<br>
f(10000) = 50005000<br>
f(100000) = 5000050000<br>
f(1000000) = 500000500000<br>  
f(10000000) = 50000005000000<br>    
f(100000000) = 5000000050000000<br>  
f(1000000000) = 500000000067108992<br>

