#include <stdio.h>
#include <stdlib.h>

/*Ler um numero real e imprimir ate a a sexta parte deste numero
Dica: é um numero flutuante*/

int main(int argc, char *argv[]) {
float numero;
printf("Digite o numero aqui\n");
scanf("%f",&numero);
printf("sexta parte: %.6f\n",numero/6);
system("pause");
	return 0;
}
