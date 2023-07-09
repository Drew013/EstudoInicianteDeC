#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
/* Faça um programa que peça 2 numeros,base e expoente, calcule e mostre o primeiro numerp elevado ao segundo numero
Dica usar for 3 variaveis 2 float e 1 int (nao pode usar o pow)*/

int main(int argc, char *argv[]) {
int expoente;
float base,resultado;
printf("Digite o numero da base:");
scanf("%d",&base);
printf("Digite o numero do expoente:");
scanf("%f",&expoente);
for(base=base;base<=expoente;base++){
	resultado = base*expoente;
	printf("%.2f",resultado);
}	
system("pause");
	return 0;
}
