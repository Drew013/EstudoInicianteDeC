#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* Entrar com a razao de uma PG eo valor do primeiro termo. Calcular e imprimir o quinto termo da serie 
Dica:3 variaveis em Int */

int main(int argc, char *argv[]) {
int termo,razao,quinto;
printf("DIGITE O PRIMEIRO TERMO:");
scanf("%d",&termo);
printf("DIGITE A RAZAO:");
scanf("%d",&razao);
quinto = termo*razao*4;
printf("O QUINTO TERMO DESTA PG:%.2d\n",quinto);
system("pause");
	return 0;
}
