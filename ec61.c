#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
/* alterar o prgrama anterior para mostrar no final a soma dos numero
Dica for 3 variaveis em int*/

int main(int argc, char *argv[]) {
int num1,num2,soma=0;
printf("Digite um numero:");
scanf("%d",&num1);
printf("Digite um numero:");
scanf("%d",&num2);
for(num1=num1;num1<=num2;num1++){
	printf("%d\n",num1);
soma = num1+num1;	
}
printf("soma:%d\n",soma);
system("pause");
	return 0;
}
