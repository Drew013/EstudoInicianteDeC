#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
/* Fa�a um programa que pe�a 2 numeros,base e expoente, calcule e mostre o primeiro numerp elevado ao segundo numero
Dica usar for 3 variaveis 2 float e 1 int (nao pode usar o pow)*/

int main(int argc, char *argv[]) {
int calculo;
float base,expoente;
printf("Digite o numero da base:");
scanf("%f",&base);
printf("Digite o numero do expoente:");
scanf("%f",&expoente);
for(base=base;base>=expoente;base++){
	calculo=base;
	
}	
printf("%d\n",calculo);
system("pause");
	return 0;
}
