#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float saldo,aplicacao;
float porcentagem;
porcentagem = 1/100;
printf("DIgite o saldo aqui:");
scanf("%p",&saldo);
aplicacao = 1/100+(saldo);
printf("Resultado:%p\n",aplicacao);
system("pause");
	return 0;
}
