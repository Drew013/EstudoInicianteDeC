#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float numero;
float numero01;
float sub;
printf("Digite aqui o numero\n");
scanf("%f",&numero);
printf("Digite aqui o segundo numero\n");
scanf("%f",&numero01);
sub = numero-numero01;
printf("Resultado final\n%f\n",sub);
system ("pause");
	return 0;
}
