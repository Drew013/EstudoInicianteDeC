#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
/* Faça um programa que peça um valor que mostra na tela se o valor é positivo ou negativo  */

int main(int argc, char *argv[]) {
	float num1;
	printf("Digite um numero:");
	scanf("%f",&num1);
	if(num1>0){
		printf("Numero positivo:%.2f",num1);
	}
	else if(num1<0){
		printf("Numero negativo:%.2f",num1);
	}
	return 0;
}
