Nesta segunda etapa, já temos alguns recursos a mais, como laços e repetições, para que o programa não execute apenas uma vez, e o usuário tenha opção encerrar o programa.

Os exercícios são baseados em listas da UFABC. Os primeiros exercícios são baseados nas listas dos professores Emílio Francesquini e Carla Negri Lintzmayer

<b>ex02_01.c</b><br>
Faça um programa que imprima um menu de 4 pratos na tela e uma quinta opção para sair do programa. O programa deve imprimir o prato solicitado. O programa deve terminar quando for escolhida a quinta opção.<br>
<p>Desenvolvimento:<br>
Utilizei pela primeira vez funções para evitar repetiçoes no código-fonte, em especial na parte do texto do menu, que é bem longa. Fiz uma opção no final da solicitação, que espera o usuário entrar com algum valor para voltar a tela inicial, mas  devido ao ambiente linux, não encontrei uma forma de fazer isso. No Windows, eu usaria System("Pause"). No Linux a função getchar não aceita muito bem, e o getch ele dá um erro. O programa está rodando de acordo com a proposta, mas esse adicional que implantei ainda não cheguei numa solução que me agrada.

<p><b>ex02_02.c</b><br>
Faça um programa que lê dois números inteiros positivos a e b. Utilizando laços, o seu programa deve calcular e imprimir o valor a^b.
<p>Desenvolvimento:<br>
Para esse laço, deve ser levado em consideração os números com expoente negetivo, e zero, já que estamos lidando com números inteiros. 
