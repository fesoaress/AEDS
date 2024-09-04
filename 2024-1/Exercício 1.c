#include <stdio.h>

int main(void) {

  int nota, res;
  scanf("%d", &nota);
  res = 'N' + 5 * (nota / 60); // verifica se foi aprovado (acima de 60) -> se
                               // for, anda 5 letras para frente e vira S
  printf("%c\n", res);

  res =
      'N' +
      5 * ((nota / 45) *
           (1 - (nota / 60))); // verifica se pegou recuperação (acima de 45) ->
                               // se for, anda 5 letras para frente e vira S
  printf("%c\n", res);

  res = 'N' +
        5 * (1 - (nota / 60)); // verifica se foi reprovado (abaixo de 45) -> se
                               // for, anda 5 letras para frente e vira S
  printf("%c\n", res);

  return 0;
}
