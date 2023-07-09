#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int numero00;
int numero01;
int numero02; 
int numero03;
int calculo;
printf("DIGITE AQUI UM NUMERO:");
scanf("%i",&numero00);
printf("DIGITE AQUI UM NUMERO:");
scanf("%i",&numero01);
printf("DIGITE AQUI UM NUMERO:");
scanf("%i",&numero02);
printf("DIGITE AQUI UM NUMERO:");
scanf("%i",&numero03);
calculo = numero00+numero02;
printf("O RESULTADO DO CALCULO:%i\n",calculo);
printf("O NUMERO EM ORDEM INVERSA:%i\n",numero03);
printf("O NUMERO EM ORDEM INVERSA:%i\n",numero02);
printf("O NUMERO EM ORDEM INVERSA:%i\n",numero01);
printf("O NUMERO EM ORDEM INVERSA:%i\n",numero00);
system("pause");
	return 0;
}
