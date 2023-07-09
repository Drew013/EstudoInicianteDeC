#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* entrar com os lados a,b,c de um paralelepipedo. Calcular e imprimir a digonal 
Dica: 4 variaveis em float */

int main(int argc, char *argv[]) {
float A,B,C,diagonal;
printf("DIGITE A ALTURA:\n");
scanf("%f",&A);
printf("DIGITE A PROFUNDIDAE:\n");
scanf("%f",&B);
printf("DIGITE A LARGURA:\n");
scanf("%f",&C);
diagonal = sqrt(2)*A*B*C;
printf("Resultado da diagonal:%.2f\n",diagonal);
system("pause");
	return 0;
}
