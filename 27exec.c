#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* Entrar com um numero no formato CDU e imprimir invertido: O UDV exemplo: 123 saira 321 o numero devera 
ser armazenado em outra variavel antes de impresso.
Dica: 5 variaveis em Int sao variavei separadas a terceira tem calculos na sigla CDU */

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
