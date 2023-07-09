#include <stdio.h>
#include <stdlib.h>

/* entrar com dois numeros reais e imprimir a media aritmetca com a mensagem media antes do resultado
sao numeros flutuantes*/

int main(int argc, char *argv[]) {
float numero;
float numero01;
printf("Digite aqui o numero:\n");
scanf("%f",&numero);
printf("Digite aqui outro numero\n");
scanf("%f",&numero01);
printf("Resultado da media aritmetica: %.2f\n",numero+numero01/2);
system("pause");
	return 0;
}
