#include <stdio.h>

int main() {

  int opcao, numeros[10], soma = 0, numero_repete = 0, frequencia = 0,
                          indice_posicao = 0, numero_muda = 0, guarda_maior = 0,
                          guarda_menor = 0, media, ordem = 0, acc = 0,
                          contab_num[101], rotacoes = 0, original[10];

  for (int i = 0; i < 10; i++) {
    scanf("%d%*c", &numeros[i]);
  }

  guarda_maior = numeros[0]; // guarda o primeiro
  guarda_menor = numeros[9]; // guarda o ultimo

  scanf("%d", &opcao);

  while (opcao != 0) {
    switch (opcao) {
    case 1:

      // posicao q vou mudar
      scanf("%d%*c ", &indice_posicao);
      // novo numero
      scanf("%d%*c ",
            // altera o num
            &numero_muda);
      numeros[indice_posicao] = numero_muda;
      for (int i = 0; i < 10; i++) {
        original[i] = numeros[i];
      }
      break;

    case 2:
      // imprime todos os numeros
      for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
      }
      printf("\n");
      break;

    case 3:
      // imprime todos os numeros na ordem inversa
      for (int j = 9; 0 <= j; j--) {
        printf("%d ", numeros[j]);
      }
      printf("\n");
      break;

    case 4:
      // acrescenta no acc todos os numeros e vai somando eles
      for (int p = 0; p < 10; p++) {
        soma = soma + numeros[p];
      }
      printf("%d", soma);
      printf("\n");
      break;

    case 5:

      numero_repete = 0;
      for (int a = 0; a < 10; a++) {
        // se tiver o numero nao faz isso pq significa q tem outro igual
        if (numeros[a] != 22222) {
          for (int s = a + 1; s < 11; s++) {
            // se antecessor é igual sucessor
            if (numeros[a] == numeros[s]) {
              // muda o numero
              numero_repete++;
              numeros[s] = 22222;
              break;
            }
          }
        }
      }
      for (int i = 0; i < 10; i++) {
        numeros[i] = original[i];
      }
      printf("%d", numero_repete);
      printf("\n");
      break;

    case 6:
      // vai colocar em ordem crescente e ver ao mesmo tempo qual é maior e
      // menos
      for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
          if (numeros[i] > numeros[j]) {
            ordem = numeros[i];
            numeros[i] = numeros[j];
            numeros[j] = ordem;
          }
        }
      }

      for (int a = 0; a < 10; a++) {
        // numeros sucessores
        for (int s = a + 1; s < 11; s++) {
          // ve antecessor e sucessor se é diferente
          if (numeros[a] != numeros[s]) {
            if (s == 10) {
              printf("%d ", numeros[a]);
            }
          } else {
            break;
          }
        }
      }
      printf("\n");
      for (int i = 0; i < 10; i++) {
        numeros[i] = original[i];
      }
      break;

    case 7:

      for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
          // verifica se o antecessor é maior que o sucessor e troca a ordem
          if (numeros[i] > numeros[j]) {
            ordem = numeros[i];
            numeros[i] = numeros[j];
            numeros[j] = ordem;
          }
        }
      }
      for (int j = 0; j <= 100; j++) {
        // zera o contab
        contab_num[j] = 0;
      }
      // adiciona 1 no contab do indice
      for (int a = 0; a < 10; a++) {
        contab_num[numeros[a]]++;
      }
      // mostra a frequencia
      for (int i = 0; i <= 100; i++) {
        if (contab_num[i] != 0) {
          printf("%d:%d ", i, contab_num[i]);
        }
      }
      for (int i = 0; i < 10; i++) {
        numeros[i] = original[i];
      }
      printf("\n");
      break;

    case 8:

      soma = 0;
      for (int i = 0; i < 10; i++) {
        soma = soma + numeros[i];
      }
      // acha o maior
      for (int m = 1; m < 10; m++) {
        if (numeros[m] > guarda_maior) {
          // se o nmero for menor que o valor guardado troca
          guarda_maior = numeros[m];
        }
      }
      // mesma coisa do menor
      for (int n = 8; n >= 0; n--) {
        if (numeros[n] < guarda_menor) {
          guarda_menor = numeros[n];
        }
      }
      // media
      printf("%d %d %.2f", guarda_menor, guarda_maior, (soma / 10.0));
      printf("\n");
      break;

    case 9:
      // vai fazer com que os numeros fiquem em ordem
      for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
          if (numeros[i] > numeros[j]) {
            ordem = numeros[i];
            numeros[i] = numeros[j];
            numeros[j] = ordem;
          }
        }
      }
      printf("P: ");
      // par
      for (int i = 0; i < 10; i++) {
        acc = 0;
        int acumulador2 = 0;
        for (int j = 10; j > i; j--) {    // sucessores do numero
          if (numeros[i] == numeros[j]) { // o numero for igual ao sucessor
                                          // adiciona 1 no acumulador de p
            acc++;
          }
        }
        if (acc == 0 && numeros[i] % 2 == 0) { // se  nao fore repetido imprime
          printf("%d ", numeros[i]);
        }
      }
      printf("I: "); // impar
      for (int i = 0; i < 10; i++) {
        acc = 0;
        for (int j = 10; j > i; j--) {
          if (numeros[i] == numeros[j]) { // mesma coisa do par
            acc++;
          }
        }
        if (acc == 0 && numeros[i] % 2 == 1) {

          printf("%d ", numeros[i]);
        }
      }
      for (int i = 0; i < 10; i++) {
        numeros[i] = original[i];
      }
      printf("\n");
      break;

    case 10:

      scanf("%d%*c", &rotacoes);
      rotacoes = rotacoes % 10;
      for (int i = rotacoes; i < 10; i++) { // mostra a squencia ao contrario
        printf("%d ", numeros[i]);
      }
      for (int a = 0; a < rotacoes; a++) { // mostra a seuquencia na outra ordem
        printf("%d ", numeros[a]);
      }
      printf("\n");
      for (int i = 0; i < 10; i++) {
        numeros[i] = original[i];
      }
      break;

    case 11:

      scanf("%d%*c", &rotacoes);
      rotacoes = rotacoes % 10;
      for (int i = 10 - rotacoes; i < 10;
           i++) { // vai imprimir tudo que vem depois do numero
        printf("%d ", numeros[i]);
      }
      for (int a = 0; a < (10 - rotacoes);
           a++) { // printa sequencia anterior do numero que quero
                  // mudar de posicao
        printf("%d ", numeros[a]);
      }
      printf("\n");
      rotacoes = 0;
      for (int i = 0; i < 10; i++) {
        numeros[i] = original[i];
      }
      break;
    }
    scanf("%d", &opcao);
  }
  return 0;
}