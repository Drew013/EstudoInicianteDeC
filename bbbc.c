#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
/* Faça um programa que peça 2 numeros,base e expoente, calcule e mostre o primeiro numerp elevado ao segundo numero
Dica usar for 3 variaveis 2 float e 1 int (nao pode usar o pow)*/

int main(int argc, char *argv[]) {
int calculo = 0;
float base,expoente;
printf("Digite o numero da base:");
scanf("%f",&base);
printf("Digite o numero do expoente:");
scanf("%f",&expoente);
for(base=1;base<=expoente;base++){
    calculo = calculo+base*expoente;
     printf("%d",calculo);
}	
system("pause");
	return 0;
}
