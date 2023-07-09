#include <stdio.h>
#include <stdlib.h>

/* entrar com dois numeros inteiros e imprimir a seguinte saida, dividendo, divisor,quociente*/

int main(int argc, char *argv[]) {
int numero;
int numero01;
int dividendo;
int divisor;
int quociente;
printf("Insira o numero aqui\n");
scanf("%d",&numero);
printf("Insira outro numero\n");
scanf("%d",&numero01);
dividendo = numero;
divisor = numero01;
quociente = numero/numero01;
printf("dividendo\n%d\n",dividendo);
printf("divisor\n%d\n",divisor);
printf("quociente\n%d\n",quociente);
system("pause");

	return 0;
}
