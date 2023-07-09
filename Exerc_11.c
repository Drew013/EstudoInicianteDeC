#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float numero;
float numero01;
float soma;
printf("Digite o primeiro numero\n");
scanf("%f",&numero);
printf("Digite o segundo numero\n");
scanf("%f",&numero01);
soma = numero+numero01;
printf("resultado final\n%f\n",soma);
system("pause");
	return 0;
}
