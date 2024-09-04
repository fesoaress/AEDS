#include <stdio.h>

int main() {

int cara=0, coroa=0, lancamento=0, continuar=1;
while (continuar==1){
scanf("%d%*c", &lancamento);
if (lancamento == 1){
cara++;
}else if (lancamento == 2){
coroa++;
}
printf("deseja continuar? 1 para sim, 2 para nao\n");
scanf("%d%*c", &continuar);
}
printf("ocorrencia de cara: %d\n", cara);
printf("ocorrencia de coroa: %d\n", coroa);
if (cara > coroa){
printf("maior ocorrencia foi cara\n");
}else {
printf("maior ocorrencia foi coroa\n");
}

return 0;
}


