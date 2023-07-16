#include <stdio.h>

void msg();

void ganhador(int a, int b);

int main(void) {
  int j1, j2;

  msg();

  ganhador(j1, j2);

  return 0;
}

void msg() {
  printf("\nBem vindos!\n\nRegras do jogo: para selecionar pedra digite 0, "
         "papel digite 1 e tesoura "
         "digite 2, boa sorte e tenham um bom jogo\n");
}

void ganhador(int a, int b) {

  printf("\nJogador 1 escolha pedra, papel ou tesoura:\t");
  scanf("%d", &a);
  while ((a != 0) && (a != 1) && (a != 2)) {
    printf("\nJogador 1 escolheu um numero invalido!\nDigite novamente:\t");
    scanf("%d", &a);
  }

  printf("\nJogador 2 escolha pedra, papel ou tesoura:\t");
  scanf("%d", &b);
  while ((b != 0) && (b != 1) && (b != 2)) {
    printf("\nJogador 2 escolheu um numero invalido!\nDigite novamente:\t");
    scanf("%d", &b);
  }

  if ((a == 0 && b == 2)) {
    printf(
        "\nJogador 1 escolheu pedra\nJogafor 2 escolheu tesoura\n\nJogador 1 "
        "Ganhou a Rodada ! ! !");
  } else if (a == 1 && b == 0) {
    printf("\nJogador 1 escolheu papel\nJogador 2 escolheu pedra\n\nJogador 1 "
           "Ganhou a Rodada ! ! !");
  } else if (a == 2 && b == 1) {
    printf(
        "\nJogador 1 escolheu tesoura\nJogador 2 escolheu papel\n\nJogador 1 "
        "Ganhou a Rodada ! ! !");
  } else if (b == 0 && a == 2) {
    printf(
        "\nJogador 1 escolheu tesoura\nJogador 2 escolheu pedra\n\nJogador 2 "
        "Ganhou a Rodada ! ! !");
  } else if (b == 1 && a == 0) {
    printf("\nJogador 1 escolheu pedra\nJogador 2 escolheu papel\n\nJogador 2 "
           "Ganhou a rodada ! ! !");
  } else if (b == 2 && a == 1) {
    printf(
        "\nJogador 1 escolheu papel\nJogador 2 escolheu tesoura\n\nJogador 1 "
        "Ganhou a Rodada ! ! !");
  } else {
    printf("\nVoces empataram ! ! !");
  }
}
