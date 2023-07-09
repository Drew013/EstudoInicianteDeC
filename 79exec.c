#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

/* faça um programa que peça dois numeros e imprima o maior deles 
Dica 2 variaves int*/

int main(int argc, char *argv[]) {
int num1,num2;
printf("Digite um numero:\n");
scanf("%d",&num1);
printf("Digite um numero:\n");
scanf("%d",&num2);
if(num1>num2){
	printf("Este eo numero maior%d\n",num1);
}
else{
	printf("Este eo numero maior%d\n",num2);
}
system("pause");
	return 0;
}
