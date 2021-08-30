Primeiros códigos fontes, em linguagem C, escritos em ambiente Linux e compilados em GCC. Notarão nos códigos que as palavras não foram acentuadas, pois no ambiente Linux, os acentos são trocados por outros caracteres. Assim, eu optei deixá-los sem acentuação.
<p>
Os arquivos inicialmente listados abaixo, são exercícios simples e muito comuns:<br>
<b>ex01_01.c</b> - calcular área do quadrado<br>
<b>ex01_02.c</b> - calcular área do retângulo<br>
<b>ex01_03.c</b> - calcular área do círculo e seu perímetro<br>
<b>ex01_10.c</b> - calcular área do triãngulo, baseado no comprimento de sua base e altura.<br>  
<b>ex01_04.c</b> - verifica dentre dois números qual é o maior<br>
<b>ex01_05.c</b> - verifica a diferença entre dois números inteiros
<p>
A partir daqui os exercícios tornam-se um pouco mais elaborados:<br>  
<b>ex01_06.c</b> - verifica dentre três números qual é o maior. Eu poderia apenas dar uma saída com o número maior como proposto pelo exercício, mas eu adicionei a possibilidade verificar se o número maior foi digitado mais de uma vez. Se sim, ele mostra a mensagem indicando o número e quantas vezes houve repetição. A outra possibilidade são todos os três números iguais. Neste caso ele diz que todos os números são idênticos. Em <b>ex01_06b.c</b>, é uma outra proposta ao exercício, que faz a ordenação, em ordem crescente dos três números.
<p>
<b>ex01_07.c</b> - verifica a média entre quatro notas digitadas. Neste exercício, eu fui um pouco além da proposta do exercício e adicionei um intervalo entre 0 a 10. Somente segue para a próxima nota se o que for digitado estiver nesse intervalo. Se não, ele solicita novamente que digite um número que esteja no intervalo.<br>
<p>
Os exercícios a seguir foram extraídos das listas dos professores Emílio Francesquini e Carla Negri Lintzmayer, da UFABC:<br>
<b>ex01_08.c</b> - calcula a função f(x) = x^(1/2) + (x/2) + x^x. Algumas funções como srqt e pow foram utilizados para o exercício. No GCC, eu tive de adicionar gcc ex01_08.c -o ex01_08 -lm para compilar o arquivo.
<p>
<b>ex01_09.c</b> - Faça um programa que leia dois valores inteiros nas variáveis x e y e
troque o conteúdo as variáveis. Refaça este problema sem o uso de outras variáveis que não x e y. Este exercício é um dos mais tradicionais que se encontram na programação. Mas eu ainda não consegui solucionar a segunda parte.
<p>
<b>ex01_11.c</b> - calcular a área de um triângulo a partir do comprimento de seus lados, utilizando a fórmula de Heron. Outra solicitação do exercício, é comparar e dizer o porquê, em alguns casos, o resultado para o ex01_10.c dá uma leve diferença com o ex01_11.c
<p>
<b>ex01_12.c</b> - o programa foi originalmente desenvolvido para que o aluno encontrasse algum erro. Modifiquei parte do código para que ele pudesse funcionar de acordo com seu propósito, que é classificar um número se é par ou ímpar, e se a partir do número 100, determinar sua posição.
<p>
<b>ex01_13.c</b> - o programa verifica se um ano inserido é um ano bissexto ou não. Utilizei uma regra que se um ano é divisível por 4, e não divisível por 100, é um ano bissexto. Se não, pergunta-se se é divisivel por 400. Se sim, é um ano bissexto, se não, não é bissexto.
<p>
<b>ex01_14.c</b> - o programa classifica triângulos a partir de dados digitados pelo usuário. Ele também verifica se os valores são aceitáveis para um triãngulo, e impede que o programa prossiga até que o usuário entre com os valores corretos.
<p>
<b>ex01_15.c</b> - o programa checará, a partir dos valores das coordenadas x e y, qual o quadrante correspondente. O programa faz a detecção se as coordenadas indicam se ela está posicionada em algum eixo.
<p>
<b>ex01_16.c</b> - o programa converte temperaturas nas escalas Celsius, Fahrenheit e Kelvin, a partir da escolha do usuário. O exercício original só solicitou as escalas Celsius e Fahrenheit. Houve uma modificação no código quando notei um problema ao inserir um caracter, e ele adicionava um espaço. Fou sugerido utilizar scanf(" %c", (com um espaço antes de %) para evitar o problema. Não verifiquei se é aceitável no ambiente Windows.
