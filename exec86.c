#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

/* Faça um programa que leia 3 numeros e mostre os em ordem decrescente */

int main(int argc, char *argv[]) {
float num1,num2,num3;
printf("Digite um numero");
scanf("%f%f%f",&num1,&num2,&num3);
if(num1>num2 && num1>num3){
	printf("%f %f %f",num1,num2,num3);
}
else if(num2>num1 && num2>num3){
	printf("%f %f %f",num1,num2,num3);
}
else{
	printf("%f %f %f",num1,num2,num3);
}

	return 0;
}
