//Algoritmo Realizado em C, enunciado da questao a seguir:

/*A prefeitura contratou um novo professor para ensinar as crianças do bairro a jogar tênis na quadra de tênis do parque municipal.
*O professor convidou todas as crianças do bairro interessadas em aprender a jogar tênis. Ao final do primeiro mês de aulas e treinamentos
*foi organizado um torneio em que cada participante disputou exatamente seis jogos. O professor vai usar o desempenho no torneio para
*separar as crianças em três grupos, de forma a ter grupos de treino em que os participantes tenham habilidades mais ou menos iguais, usando o seguinte critério:
*    participantes que venceram 5 ou 6 jogos serão colocados no Grupo 1;
*    participantes que venceram 3 ou 4 jogos serão colocados no Grupo 2;
*    participantes que venceram 1 ou 2 jogos serão colocados no Grupo 3;
*    participantes que não venceram nenhum jogo não serão convidados a continuar com os treinamentos.
*Dada uma lista com o resultado dos jogos de um participante, escreva um programa para determinar em qual grupo ele será colocado.
*
*Entrada:
*A entrada consiste de seis linhas, cada linha indicando o resultado de um jogo do participante. Cada linha contém um único caractere: V
*se o participante venceu o jogo, ou P se o jogador perdeu o jogo. Não há empates nos jogos.
*
*Saida:
*Seu programa deve produzir uma única linha na saída, contendo um único inteiro, identificando o grupo em que o participante será colocado.
*Se o participante não for colocado em nenhum dos três grupos seu programa deve imprimir o valor -1.
*
*
*Link para questao e casos de teste: https://olimpiada.ic.unicamp.br/pratique/ps/2021/f1/torneio/
*/

#include<stdio.h>

int main(){
  int i,contagem_vitorias=0;
  char jogos; /*A variavel jogos ira armazenar o caracter de entrada do usuario,
  *para ser comparado com o caracter V mais a frente
  */
  for(i=0;i<6;i++){
    scanf("%c",&jogos);
    if(jogos=='V' || jogos=='v'){
      contagem_vitorias++;
    }
    fflush(stdin);//Para limpar o campo de entrada do usuario, nao contando o enter como um caracter
  }
  if(contagem_vitorias>4){
    printf("3");
  }else if(contagem_vitorias>2){
    printf("2");
  }else if(contagem_vitorias>0){
    printf("1");
  }else{
    printf("-1");
  }
  return 0; 
}
