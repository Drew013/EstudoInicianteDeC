#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* Entrar com um numero e a base  em que deseja calcular o lagaritmo desse numero e imprimi-lo 
Dica: 3 variaveis em float base é uma é uma variavel. */

int main(int argc, char *argv[]) {	
double base,log,resultado;
printf("DIGITE A BASE AQUI:\n");
scanf("%lf",&base);
printf("DIGITE O LOG AQUI\n");
scanf("%lf",&log);
resultado = pow(base,log);
printf("RESULTADO AQUI:%.1lf^%.1lf = %.2lf\n",base,log,resultado);
system("pause");
	return 0;
}
