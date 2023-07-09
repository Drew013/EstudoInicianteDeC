#include <stdio.h>
#include <stdlib.h>

/* Antes de O racionamento de energia se decretado, quase ninguem falava em QUILOWATTS; Mas agora todos encorporaram 
essa palavra em seu vocabulario. Sabendo se que 100QUILOWATTS de energia custa 1/7 do salario minimo, fazer um algoritmo 
que receba o valor do salario minimo e a quantidade de QUILOWATTS gasto por uma residencia e calcule, e imprima
O valor em reais de cada Quilowattas  o valor a em reais a ser pago. O novo valor a ser pago por essa residencia com um 
desconto de (10%) Dica: 5 variaveis em float*/

int main(int argc, char *argv[]) {
float SM,QTD,PRECO,VP,VD;
printf("ENTRE COM O SALARIO MININO:\n");
scanf("%f",&SM);
printf("ENTRE COM A QUANTIDADE DE QUILOWATTS:\n");
scanf("%f",&QTD);
PRECO = SM/700;
VP = VP*0.9;

printf("PRECO DO QUILOWATTS:%.2f\n valor a ser pago:%.2f\n valor com desconto:%.2f\n",PRECO,VP,VD);
system("pause");
	return 0;
}
