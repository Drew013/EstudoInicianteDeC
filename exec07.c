#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

 int numero;
 int numero01;
 int soma;
 printf("digite seu primeiro numero");
 scanf("%i",&numero);
 printf("digite seu segundo numero");
 scanf("%i",&numero01);
 soma = numero+numero01;
 printf("soma do calculo e\n%i\n",soma);
 system("pause");
 
	
	return 0;
}
