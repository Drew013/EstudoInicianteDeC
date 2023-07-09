#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* Criar um algoritmo que efetue o calculo do salario liquido de professor. Os dados fornecidos seram: valor da hora aula 
numeros de aulas dadas no mes, percentual desconto do INSS
Dica: 6 variaveis (3 estao no exercicios)
5 float e 1 int */

int main(int argc, char *argv[]) {
float salario,Inss,H_aula,carga_H,H_semanais;
int N_aula;	
printf("Digite o salario:");
scanf("%f",&salario);
printf("Digite o seu numero de aulas dado no mes:");
scanf("%d",&N_aula);
printf("Digite sua carga horaria:");
scanf("%f",&carga_H);
printf("Digite sua horas semanais:");
scanf("%f",&H_semanais);
printf("Digite suas horas de aulas:");
scanf("%f",&H_aula);
Inss = 7.5/100;
salario = (salario*Inss);
printf("Valor apos o desconto do INSS:%.2f\n",salario);
printf("Aulas dado no mes:%.2d\n",N_aula);
printf("Horas  de aulas dado no mes:%.2f\n",H_aula);
printf("Horas semanais da aula:%.2f\n",H_semanais);
printf("Carga de horaria de aula:%.2f\n",carga_H);
system("pause");
	return 0;
}
