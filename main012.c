#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float quilowatts;
float salario_minimo;
float desconto;
float gasto; 
float calculo00,calculo01,calculo02;
quilowatts = 100;
desconto = 0.10;
gasto = 188.70;
salario_minimo = 1320.00;
calculo00 = (gasto)/(quilowatts);
calculo01 =  (desconto)/(quilowatts)-(gasto);
calculo02 = salario_minimo - gasto;
printf("VALOR DO QUILOWATTS GASTO:%d\n",calculo00);
printf("VALOR DO QUILOWATTS GASTO COM DESCONTO:%d\n",calculo01);
printf("VALOR DO SALARIO RESTANTE:%d\n",calculo02);
system("pause");
	return 0;
}
