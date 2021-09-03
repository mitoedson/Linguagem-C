Nesta segunda etapa, já temos alguns recursos a mais, como laços e repetições, para que o programa não execute apenas uma vez, e o usuário tenha opção encerrar o programa.

Os exercícios são baseados em listas da UFABC. Os primeiros exercícios são baseados nas listas dos professores Emílio Francesquini e Carla Negri Lintzmayer

<b>ex02_01.c</b><br>
Faça um programa que imprima um menu de 4 pratos na tela e uma quinta opção para sair do programa. O programa deve imprimir o prato solicitado. O programa deve terminar quando for escolhida a quinta opção.<br>
<p>Desenvolvimento:<br>
Utilizei pela primeira vez funções para evitar repetiçoes no código-fonte, em especial na parte do texto do menu, que é bem longa. Fiz uma opção no final da solicitação, que espera o usuário entrar com algum valor para voltar a tela inicial, mas  devido ao ambiente linux, não encontrei uma forma de fazer isso. No Windows, eu usaria System("Pause"). No Linux a função getchar não aceita muito bem, e o getch ele dá um erro. O programa está rodando de acordo com a proposta, mas esse adicional que implantei ainda não cheguei numa solução que me agrada.

<p><b>ex02_02.c</b><br>
Faça um programa que lê dois números inteiros positivos a e b. Utilizando laços, o seu programa deve calcular e imprimir o valor a^b.
<p>Desenvolvimento:<br>
Para esse laço, deve ser levado em consideração os números com expoente negetivo, e zero, já que estamos lidando com números inteiros. Para expoente negativo, inevitável que tive de converter o resultado para double, já que se eu deixasse como int, o compilador apresentará erro. Para expoente positivo, o procedimento com o laço FOR é o mesmo. Exceto para expoente zero, que passa por uma condicional que desviava para um único resultado, que será UM.

<p><b>ex02_03.c</b><br>
Faça um programa que lê um número n e que compute e imprima o valor. Índice inicial i, índice final n, termo de somatório i. i=1.
<p>Desenvolvimento:<br>
A soma foi produzida através de um laço FOR com valor inicial i=1, que soma o item posterior, até o valor n. Acrescido um limite mínimo n de 1.

<p><b>ex02_04.c</b><br>
Faça um programa que lê um número n e imprima os valores entre 2 e n que são divisores de n.
<p>Desenvolvimento:<br>
A partir de números inteiros positivos a partir de 2, utilizei o recurso de laço FOR para analisar sequencialmente se a divisão oferecia condições para que seja um número divisor.  
  
<p><b>ex02_05.c</b><br>
Faça um programa que lê um número n e que compute e imprima os valores Vj. Índice inicial i, índice final j, termo de somatório i. i=1 para j variando de 1 até n, um valor Vj por linha.
<p>Desenvolvimento:<br>
É um programa semelhante ao exercício ex02_03.c, e se diferencia apenas na exibição dos resultados.

<p><b>ex02_06.c</b><br>
Considere o programa para determinar se uma sequência de n números digitados pelo usuário está ordenada ou não. Faça o programa usando uma variável contadora.  
<p>Desenvolvimento:<br>
Como proposta de exercício, eu faria com vetores para armazenar os números e ordená-los, mas como a sequências de aulas ainda não chegou ao assunto sobre matrizes e vetores, eu fiz uma versão simplificada, sem vetores, que apenas analisa se o usuário está digitando sequencialmente, e na saída ele informa se houve ordenação da sequência numérica. Eu acredito que seja essa a proposta do exercício. Eu adicionei a possibilidade verificar se o usuário digitou de forma crescente, decrescente ou não ordenada.

<p><b>ex02_07.c</b><br>
Faça um programa em C que calcule o máximo divisor comum de dois números m e n. Você deve utilizar a seguinte regra do cálculo do mdc com m ≥ n: mdc(m, n) = m se n = 0; mdc(m, n) = mdc(n, m%n) se n > 0
<p>Desenvolvimento:<br>
Neste exercício eu construi um gerador de números primos, que calcula de 2 até n1, e será base para cálculo do mdc entre dois números digitados.   
  
<p><b>ex02_08.c</b><br>
Escreva um programa que lê um número n e então imprime o menor número primo que é maior ou igual n e imprime o maior primo que é menor ou igual a n.
<p>Desenvolvimento:<br>
Diferente do exercício anterior, eu construi um gerador de números primos, sem limites, mas que encerra quando as condições são cumpridas. Estas condições são os números primos que intervalam um número digitado, e este programa também indica se o número é também primo.
