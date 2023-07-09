#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
/* Receber um nome no teclado e imprimir a seguinte saida -nome completo; -primeiro caracter; -do primeiro ate o terceiro caracter
Dica: 3variaveis 2 int e 1char uso de for */

int main(int argc, char *argv[]) {
char n[1];
int p,t;
for (p=1;p<=3;p++);{
t = 3;
printf("Digite o nome:");
strncpy(n,n,5);
printf("nome:%s\n",n);
printf("caracteres:%d\n",p,t);
}
system("pause");
	return 0;
}
