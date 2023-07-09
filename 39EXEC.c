#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* Entrar com a razao de uma PA eo valor do primeiro termo. calcule e imprimar o decimo termo da serie 
Dica:sao 3 variaveis em Int */

int main(int argc, char *argv[]) {
int termo01,termo10,resultado;
printf("DITIE O 1°termo:");
scanf("%d",&termo01);
termo10 =10;
resultado = (termo01*termo10)*10/2;
printf("RESULTADO DA P.A:%.2d\n",resultado);
printf("DECIMO TERMO DA P.A:%.2d\n",termo10);
system("pause");
	return 0;
}
