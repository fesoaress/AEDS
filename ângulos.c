#include <stdio.h>
int main(void) {

  int angulo, resto, volta;

  scanf("%d", &angulo);

  // se o resto da divisao for 0 esta em um dos eixos pois todos eles sao
  // divisiveis por 90
  if (angulo % 90 == 0) {
    printf("Este angulo se enconta em um dos eixos\n");
  }

  // calcula o resto que falta
  resto = angulo % 360;

  // calcula para os numeros negativos
  if (angulo < 0) {
    resto = 360 + resto;
  }

  // calcula todos os quadrantes
  if (resto > 0 && resto <= 90) {
    printf("Primeiro quadrante\n");
  }

  if (resto > 90 && resto <= 180) {
    printf("Segundo quadrante\n");
  }

  if (resto > 180 && resto <= 270) {
    printf("Terceiro quadrante\n");
  }

  if (resto > 270 && resto < 360) {
    printf("Quarto quadrante\n");
  }

  // calcula voltas
  if (angulo < 0) {
    volta = angulo / 360 * -1;
    printf("%d volta(s) sentido horario\n", volta);
    // quantos graus precisam para completar o numero de voltas que ja deu +1
    volta = (angulo / 360 * -1) + 1;
    printf("Falta(m) %d graus (sentido horario) para completar %d volta(s)\n",
           360 - ((angulo * -1) % 360), volta);

  } else if (angulo >= 0) {
    volta = angulo / 360;

    printf("%d volta(s) sentido antihorario\n", volta);
    volta = (angulo / 360) + 1;

    printf(
        "Falta(m) %d graus (sentido antihorario) para completar %d volta(s)\n",
        360 - (angulo % 360), volta);
  }

  return 0;
}
