Primeiros códigos fontes, em linguagem C. Os primeiros exercícios são bem básicos para estimular o aprendizado.
<p>
Os arquivos neste repositório são:<br>
<b>ex01_01.c</b> - calcular área do quadrado<br>
<b>ex01_02.c</b> - calcular área do retângulo<br>
<b>ex01_03.c</b> - calcular área do círculo<br>
<b>ex01_10.c</b> - calcular área do triãngulo, baseado no comprimento de sua base e altura.<br>  
<b>ex01_04.c</b> - verifica dentre dois números qual é o maior<br>
<b>ex01_05.c</b> - verifica a diferença entre dois números inteiros
<p>
A partir daqui os exercícios tornam-se um pouco mais elaborados:<br>  
<b>ex01_06.c</b> - verifica dentre três números qual é o maior. Eu poderia apenas dar uma saída com o número maior como proposto pelo exercício, mas eu adicionei a possibilidade verificar se o número maior foi digitado mais de uma vez. Se sim, ele mostra a mensagem indicando o número e quantas vezes houve repetição. A outra possibilidade são todos os três números iguais. Neste caso ele diz que todos os números são idênticos.
<p>
<b>ex01_07.c</b> - verifica a média entre quatro notas digitadas. Neste exercício, eu fui um pouco além da proposta do exercício e adicionei um intervalo entre 0 a 10. Somente segue para a próxima nota se o que for digitado estiver nesse intervalo. Se não, ele solicita novamente que digite um número que esteja no intervalo.<br>
<p>
Os exercícios a seguir foram extraídos das listas dos professores Emílio Francesquini e Carla Negri Lintzmayer, da UFABC:<br>
<b>ex01_08.c</b> - calcula a função f(x) = x^(1/2) + (x/2) + x^x. Algumas funções como srqt e pow foram utilizados para o exercício. No GCC, eu tive de adicionar gcc ex01_08.c -o ex01_08 -lm para compilar o arquivo.
<p>
<b>ex01_09.c</b> - Faça um programa que leia dois valores inteiros nas variáveis x e y e
troque o conteúdo as variáveis. Refaça este problema sem o uso de outras variáveis que não x e y. Este exercício é um dos mais tradicionais que se encontram na programação. Mas eu ainda não consegui solucionar a segunda parte.
<p>
<b>ex01_11.c</b> - calcular a áreade um triângulo a partir do comprimento de seus lados, utilizando a fórmula de Heron.
