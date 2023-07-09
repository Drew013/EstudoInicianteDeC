#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int numero;
int numero01;
int multi;
printf("Digite seu primeiro numero\n");
scanf("%i",&numero);
printf("Digite seu segundo numero\n");
scanf("%i",&numero01);
multi = numero*numero01;
printf("Resultado\n%i\n",multi);
system("pause");
	return 0;
}
