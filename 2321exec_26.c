#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* faça um algoritmo que possa entrar com um saldo de uma aplicaçao e o novo saldo, considerando o reajuste de 1% 
Dica: 2 variaves,porcentagem (0.1)=1%*/

int main(int argc, char *argv[]) {
float saldo,aplicacao;
printf("DIgite o saldo aqui:");
scanf("%f",&saldo);
aplicacao = (1/100)+saldo;
printf("Resultado:%f\n",aplicacao);
system("pause");
	return 0;
}
