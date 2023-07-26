#include <stdio.h>

void boasVindas();

int jogar(int a, int b);

int escolha();

int main() {
  int j1, j2, resultado;
  int jogarNovamente = 1;

  void boasVindas();
  
  while (jogarNovamente) {
    j1 = escolha();
    j2 = escolha();

    printf("\nJogador 1 escolheu:");
    switch (j1) {
    case 0:
      printf("\nPedra\n");
      break;
    case 1:
      printf("\nPapel\n");
      break;
    case 2:
      printf("\nTesoura\n");
      break;
    }

    printf("\nJogador 2 escolheu:");
    switch (j2) {
    case 0:
      printf("\nPedra\n");
      break;
    case 1:
      printf("\nPapel\n");
      break;
    case 2:
      printf("\nTesoura\n");
      break;
    }

    resultado = jogar(j1, j2);
    if (resultado == 1) {
      printf("\nJogador 1 venceu!!!");
    } else if (resultado == -1) {
      printf("\nJogador 2 venceu!!!");
    } else {
      printf("\nVoces empataram!!!");
    }

    printf("\nDeseja jogar novamente? (sim = 1, nao = 0)");
    scanf("%d", &jogarNovamente);
  }

  return 0;
}

void boasVindas() {
  printf("\nBem-vindos! ao jogo Pedra, Papel e Tesoura!\n\n");
  printf("\nRegras do jogo:\n");
  printf("Pedra: 0\n");
  printf("Papel: 1\n");
  printf("Tesoura: 2\n");
  printf("Boa Sorte! E Divirtam-se!\n\n");
}

int jogar(int a, int b) {
  if ((a == 0 && b == 2) || (a == 1 && b == 0) || (a == 2 && b == 1)) {
    return 1;
  } else if ((b == 0 && a == 2) || (b == 1 && a == 0) || (b == 2 && a == 1)) {
    return -1;
  } else {
    return 0;
  }
}

int escolha() {
  int escolha;
  printf("\nEscolha sua jogada (pedra: 0, papel: 1, tesoura: 2):\n");
  scanf("%d", &escolha);

  while (escolha < 0 || escolha > 2) {
    printf("\nEscolha Invalida!\nEscolha novamente:\n");
    scanf("%d", &escolha);
  }
  return escolha;
}
