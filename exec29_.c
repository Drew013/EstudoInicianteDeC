#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
/* Criar um programa que imprima que media artmetica entre os numeros 8,9,7 DICA:float */

int main(int argc, char *argv[]) {
float numero00 = 8;
float numero01 = 9;
float numero02 = 7;
float calculo;
calculo = numero00+numero01+numero02/3;
printf("Resultado:%.2f\n",calculo);
system("pause");
	return 0;
}
