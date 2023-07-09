#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float numero;
float numero01;
float mult;
printf("Digite aqui o numero\n");
scanf("%f",&numero);
printf("Digite aqui outro numero\n");
scanf("%f",&numero01);
mult = numero*numero01;
printf("Resultado final\n%f\n",mult);
system("pause");
	return 0;
}
