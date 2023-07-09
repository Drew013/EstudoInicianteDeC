#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 char nome[1];
 int idade;
 printf("digite seu nome\n");
 scanf("%s",&nome);
 printf("digite sua idade\n");
 scanf("%d",&idade);
 printf("Seu nome e: \n%s\n",nome);
 printf("Sua idade e: \n%d\n",idade);
 system("pause");
	return 0;
}
