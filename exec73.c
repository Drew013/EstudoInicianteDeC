#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

/* Faça o programa que calcule o fatorial de um numero inteiro fornecido pelo usuario 
Ex: 5!=5*4*3*2*1 = 120
 Dica 2 variaveis em int*/

int main(int argc, char *argv[]) {
int fat,n;
printf("Digite um numero para fazer a fatoracao:");
scanf("%d",&n);
for (fat=1;n>1;n=n-1){
	fat = fat*n;
}
printf("%d\n",fat,n);
system("pause");
	return 0;
}
