#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float QWTTS;
float desconto;
float salario;
float gasto;
float calculo,calculo1;
salario = 1320.00;
gasto = 1/7;
QWTTS = 100;
desconto = 10/100;
calculo1 = (salario-gasto)/(QWTTS);
calculo = (salario-gasto+QWTTS)*(desconto);
printf("VALOR PAGO DA LUZ SEM O DESCONTO:%f\n",calculo1);
printf("VALOR PAGO DA LUZ SEM O DESCONTO:%f\n",calculo);
system("pause");
	return 0;
}
