#include <stdio.h>

int main() {
    int numero, fatorial, continuar = 1;

    while (continuar == 1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Numero invalido! Por favor, digite um numero inteiro positivo.\n");
        } else {
            fatorial = 1;
            int i = 1;
            while (i <= numero) {
                fatorial *= i;
                i++;
            }
            printf("O fatorial de %d é %d\n", numero, fatorial);
        }

        printf("Deseja continuar? Digite 1 para sim ou 0 para nao: ");
        scanf("%d", &continuar);
    }

    return 0;
}
