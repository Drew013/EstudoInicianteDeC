#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/* /* Receber um nome no teclado e imprimir a seguinte saida -nome completo; -primeiro caracter; -do primeiro ate o terceiro caracter
Dica: 3variaveis 2 int e 1char uso de for */

int main(int argc, char *argv[]) {
int c,t;
char nome[40];
printf("digite um nome:\n");
gets(nome);
t=strlen(nome);
for (c=0;c<=nome;c++){
}
printf("\n nome completo:%s\n",(nome));
printf("\n nome completo:%s\n",(nome[0]));
printf("\n nome completo:%s\n",(nome[1]));
printf("\n nome completo:%s\n",(nome[2]));
	return 0;
}
