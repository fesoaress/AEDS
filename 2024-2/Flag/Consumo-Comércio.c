#include <stdio.h>

int main() {
int consumo=0, consumo_residencia=0, consumo_comercio=0, continuar=1, media_residencia=0, media_comercio=0, media_bairro=0, qnt_residencia=0,qnt_comercio=0, tipo_consumo, acc_consumo_residencia=0, acc_consumo_comercio=0;

while (continuar==1) {
printf("digite o consumo\n");
scanf("%d%*c", &consumo);
printf("digite de 1 para residencia e 2 para comercio\n");
scanf("%d%*c", &tipo_consumo);

if (tipo_consumo == 1){
qnt_residencia++;
acc_consumo_residencia += consumo;
} else if (tipo_consumo == 2) {
qnt_comercio++;
acc_consumo_comercio += consumo;
}

printf("deseja continuar? 1 para sim e 0 para nao\n");
scanf("%d%*c", &continuar);
}

media_residencia = acc_consumo_residencia/qnt_residencia;
media_comercio = acc_consumo_comercio/qnt_comercio;
media_bairro = (acc_consumo_comercio + acc_consumo_residencia) / (qnt_comercio + qnt_residencia);

printf("quantidade consumidores de residencia: %d\n", qnt_residencia);
printf("quantidade consumidores de comercio: %d\n", qnt_comercio);
printf("media consumo residencia: %d\n", media_residencia);
printf("media consumo comercio: %d\n", media_comercio);
printf("media consumo bairro: %d\n", media_bairro);

return 0;
}


