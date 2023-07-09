#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Entrar com o nome e idade e imprimir saida: nome,idade 
Dica 2 variaveis */

int main(int argc, char *argv[]) {
char nome[100];
int idade;
printf("DIGITE SEU NOME:\n");
scanf("%s",&nome);
printf("DIGITE SUA IDADE\n");
scanf("%d",&idade);
printf("SEU NOME E:%s\n",nome);
printf("SUA IDADE E:%d\n",idade);
system("pause");

	return 0;
}
