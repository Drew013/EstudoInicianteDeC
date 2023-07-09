#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* para varios tributos, a base de calculo é o salario minimo. fazer um algoritmo que leia o valor do salario minimo e o
valor de um salario de uma pessoa. calcular e imprimir quantos salarios minimos ela ganha.
Dica: 3 variaveis em float  */

int main(int argc, char *argv[]) {
float Min_salario,P_salario,Quant_salario;
printf("Digite seu salario:");
scanf("%f",&P_salario);
Min_salario = 1320.57;
Quant_salario = (P_salario)/(Min_salario);
printf("A diferenca do seu salario para o salario minimo:%.2f\n",Quant_salario);
system("pause");
	return 0;
}
