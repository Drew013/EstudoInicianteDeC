#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Antes de O racionamento de energia se decretado, quase ninguem falava em QUILOWATTS; Mas agora todos encorporaram 
essa palavra em seu vocabulario. Sabendo se que 100QUILOWATTS de energia custa 1/7 do salario minimo, fazer um algoritmo 
que receba o valor do salario minimo e a quantidade de QUILOWATTS gasto por uma residencia e calcule, e imprima
O valor em reais de cada Quilowattas  o valor a em reais a ser pago. O novo valor a ser pago por essa residencia com um 
desconto de (10%) Dica: 5 variaveis em float  */

int main(int argc, char *argv[]) {
float quilowatts;
float salario_minimo;
float desconto;
float gasto; 
float calculo00,calculo01,calculo02;
quilowatts = 100;
desconto = 18.87;
gasto = 188.70;
salario_minimo = 1320.00;
calculo00 = gasto/(quilowatts);
calculo01 = gasto - desconto/(quilowatts);
calculo02 = salario_minimo - gasto;
printf("VALOR DO QUILOWATTS GASTO:%d\n",calculo00);
printf("VALOR DO QUILOWATTS GASTO COM DESCONTO:%d\n",calculo01);
printf("VALOR DO SALARIO RESTANTE:%d\n",calculo02);
system("pause");
return 0;
}
