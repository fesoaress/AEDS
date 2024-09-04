#include <stdio.h>

int main(void) {

  int num1, num2, opcao, resposta = 0, var = 1;
  scanf("%d%*c", &num1);
  scanf("%d%*c", &num2);
  scanf("%d%*c", &opcao);

  switch (opcao) {
  case 1:
    //passa pelo índice dos numeros
    for (int i = 0; num1 > 0; i++) {
    //quebra o numero e remonta ele enquanto nao for igual ao numero dado
      if (i != num2) {
        resposta = resposta + (num1 % 10) * var;
        var *= 10;
      }

      num1 /= 10;
    }

    printf("%d", resposta);
    break;

  case 2:
    
    for (int i = 0; num1 > 0 || num2 > 0; i++) {

      //quebra o numero e segue a mesma logica do case 1
      if (num2 > 0) {
        resposta = resposta + (num2 % 10) * var;
        var *= 10;
        num2 /= 10;
      }
      
      if (num1 > 0) {
        resposta = resposta + (num1 % 10) * var;
        var *= 10;
        num1 /= 10;
        
      }
    }
    printf("%d", resposta);
    break;

  case 3:

    //exatamente a mesma logica dos anteriores
    while (num2 > 0) {
      resposta = resposta + (num2 % 10) * var;
      var *= 10;
      num2 /= 10;
    }
    
    while (num1 > 0) {
      resposta = resposta + (num1 % 10) * var;
      var *= 10;
      num1 /= 10;
      
    }
    printf("%d", resposta);
    break;

  default:
    printf("Essa operacao e invalida!\n");
    break;
  }

  return 0;
}
