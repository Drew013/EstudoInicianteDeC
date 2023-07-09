#include <stdio.h>
#include <stdlib.h>

/*ler dois numeros  e imprimir o produto*/

int main(int argc, char *argv[]) {
int numero;
int numero01;
int produto;
printf("Coloque o numero aqui\n");
scanf("%d",&numero);
printf("Coloque outro numero aqui\n");
scanf("%d",&numero01);
produto = numero+numero01;
printf("valor do produto e\n%d\n",produto);
system("pause");

	return 0;
}
