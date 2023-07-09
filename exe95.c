#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que peça o numero correspondente a um determinado ano e em seguida se o ano 
nao e bisexto 
Dica:uma variavel em int */

int main(int argc, char *argv[]) {
int ano;
printf("Digite um ano:");
scanf("%d",&ano);
if (((ano % 4 == 0) && (ano % 100!= 0)) || (ano%400 == 0)){
	printf("Este ano e bissexto\n");
}
else{
	printf("Este nao e bissexto\n");
}
system("pause");
	return 0;
}
