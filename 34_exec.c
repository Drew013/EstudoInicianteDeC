#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* Criar um algoritmo que calcule e imprima a area de um triangulo 
Dica: 2 variaveis em float*/

int main(int argc, char *argv[]) {
float altura,base;
printf("DIGITE A BASE:\n");
scanf("%f",&base);
printf("DIGITE A ALTURA:\n");
scanf("%f",&altura);
base = base*altura/2;
printf("RESULTADO DA AREA DO TRIANGULO:%.2f\n",base);
system("pause");
	return 0;
}
