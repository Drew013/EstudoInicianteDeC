#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
/* Faça um programa que peça 2 numeros,base e expoente, calcule e mostre o primeiro numerp elevado ao segundo numero
Dica usar for 3 variaveis 2 float e 1 int (nao pode usar o pow)*/

int main(int argc, char *argv[]) {
int expoente,i;
float base,numero;
printf("Digite o numero da base:");
scanf("%f",&base);
printf("Digite o numero do expoente:");
scanf("%d",&expoente);
numero = 1;
for(i=1;i<=expoente;i++){
	numero *= base;	
}	
printf("%f elevado a %d e %f\n",base,expoente,numero);
system("pause");
	return 0;
}
