#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
/* Faça um programa que leia 3 numeros e mostre o maior deles.
Dica 3variaveis em float  */

int main(int argc, char *argv[]) {
float num1,num2,num3;
printf("Digite um numero:");
scanf("%f",&num1);
printf("Digite um numero:");
scanf("%f",&num2);
printf("Digite um numero:");
scanf("%f",&num3);
if (num1>num2 && num1>num3){
	printf("Esse eo maior numero%f\n",num1);
}
else if (num2>num1 && num2>num3){
	printf("Esse eo maior numero%f\n",num2);
}
else{
	printf("Esse eo maior numero%f\n",num3);
}
system("pause");
	return 0;
}
