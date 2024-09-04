#include <stdio.h>

int main() {
int numero_secreto=0, numero_digitado=0, tentativa = 0;

printf("digite o numero secreto: ");
scanf("%d%*c", &numero_secreto);

do {

printf("digite a tentativa : ");
scanf("%d%*c", &numero_digitado);
tentativa++;

if (numero_digitado < numero_secreto){
printf("o numero digitado é menor que o numero secreto\n");
} else if (numero_digitado > numero_secreto){
printf("o numero secreto é maior que o numero digitado\n");
}

} while (numero_digitado != numero_secreto); 

printf("Voce acertou! Tentativas necessarias: %d", tentativa);
return 0;
}