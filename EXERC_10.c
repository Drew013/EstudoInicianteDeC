#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int numero;
int numero01;
int soma;
int dividir;
int	multi;
int sub;
printf("Digite aqui o numero\n");
scanf("%i",&numero);
printf("Digite aqui outro numero\n");
scanf("%i",&numero);
soma = numero+ numero;
printf("Resultado da soma\n%i\n",soma);
dividir = numero/numero01;
printf("Resultado da divisao\n%i\n",dividir);
multi = numero*numero01;
printf("Resultado da multiplicacao\n%i\n",multi);
sub = numero- numero01;
printf("Resultado da subtracao\n%i\n",sub);
	system("pause");
	
	return 0;
	
}
