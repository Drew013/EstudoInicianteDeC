#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int numero;
int numero01;
int subtracao;
printf("DIGITE AQUI SEU PRIMEIRO NUMERO:\n");
scanf("%i",&numero);
printf("DIGITE AQUI SEU SEGUNDO NUMERO:\n");
scanf("%i",&numero01);
subtracao = numero-numero01;
printf("O RESULTADO FINAL E\n%i\n",subtracao);
system ("pause");


	return 0;
}
