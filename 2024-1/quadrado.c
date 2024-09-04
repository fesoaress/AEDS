#include <stdio.h>
int main() {

  int lado, linha, coluna, diagonal1, diagonal2;
  char quadrado;

  scanf("%d%*c", &lado);

  scanf("%c%*c", &quadrado);

  diagonal1 = 1;
  diagonal2 = lado - 2;

  switch (quadrado) {

    // quadrado preenchido
  case 'c':
    // preenche as linhas com asteriscos
    for (linha = 0; linha < lado; linha++) {
      // preenche as colunas com asteriscos
      for (coluna = 0; coluna < lado; coluna++) {
        printf("*");
      }
      printf("\n");
    }
    break;

    // somente bordas
  case 'b':
    // indice das colunas e linhas forem os primeiros da sequencia ou ultimos,
    // preenche com * se nao deixa em branco
    for (linha = 0; linha < lado; linha++) {
      for (coluna = 0; coluna < lado; coluna++) {
        if (coluna == 0 || coluna == lado - 1 || linha == 0 ||
            linha == lado - 1) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;

    // borda e diagonal principal
  case 'p':
    // Se o indice da minha linha for igual ao da coluna-lado, preenche com.
    // alem disso, se o indice das colunas e linhas forem os primeiros da
    // sequencia ou ultimos, preenche,, caso contrario, deixa em branco
    for (linha = 0; linha < lado; linha++) {
      for (coluna = 0; coluna < lado; coluna++) {
        if (linha == 0 || coluna == 0 || coluna == lado - 1 ||
            linha == lado - 1) {
          printf("*");
        } else if (linha == diagonal1 && coluna == diagonal2) {
          printf("*");
          diagonal1++;
          diagonal2--;
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;

    // Se o indice da minha coluna for igual a minha linha-coluna, preenche com
    // . Alem disso, se o indice das colunas e linhas forem os primeiros da
    // sequencia ou ultimos, preenche, caso contrario, deixa em branco

    // borda e diagonal secundaria
  case 's':
    for (linha = 0; linha < lado; linha++) {
      for (coluna = 0; coluna < lado; coluna++) {
        if (coluna == 0 || coluna == lado - 1 || linha == 0 ||
            linha == lado - 1 || linha == coluna) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;

    // quando o indice da linha tiver na metade, vai preencher todas as colunas
    // com linha de mesmo indice com *
    //  bordas e divisao horizontal(meio)
  case 'h':
    for (linha = 0; linha < lado; linha++) {
      for (coluna = 0; coluna < lado; coluna++) {
        if (coluna == 0 || coluna == lado - 1 || linha == 0 ||
            linha == lado - 1 || coluna == lado / 2) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;

    // bordas e divisao vertical(meio)
    // quando o indice da coluna estiver na metade, vai preencher todas as
    // linhas com coluna do mesmo indice com *
  case 'v':
    for (linha = 0; linha < lado; linha++) {
      for (coluna = 0; coluna < lado; coluna++) {
        if (coluna == 0 || coluna == lado - 1 || linha == 0 ||
            linha == lado - 1 || linha == lado / 2) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;
  default:
    printf("Nao existe essa opcao");
  }
  return 0;
}