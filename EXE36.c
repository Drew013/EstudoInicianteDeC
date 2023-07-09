#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Entrar com o nome e idade e imprimir saida: nome,idade 
Dica 2 variaveis */

int main(int argc, char *argv[]) {
char nome;
int idade;
printf("DIGITE SEU NOME:");
scanf("%c",&nome);
printf("DIGITE SUA IDADE");
scanf("%i",&idade);
printf("SEU NOME E:",nome);
printf("SUA IDADE E:",idade);
system("pause");

	return 0;
}
