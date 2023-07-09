#include <stdio.h>
#include <stdlib.h>

/* As organizaçoes tabajara resolveram dar um aumento de salario aos seus colaboradores 
e lhe contrataram para desenvolver o programa que calcula os reajustes 
Faça um programa que recebe o salario de um colaborador e o reajuste segundo o seguinte
criterio,baseado no salariio atual:salarios ate 280 aumento de 20%, salarios entre 280 e 
700 aumento
de 15%, salarios entre 700 e 1.5k aumento de 10%, salarios de 1.5k em diante aumento de 5%
Apos o aumento ser realizado,informe na tela:O salario anterior,
o percentual de aumento aplicado,O valor do aumento,O salario apos o aumento */

int main(int argc, char *argv[]) {
float salario_anterior,percentual,diferenca_entre_salario,salario_atual;
printf("Digite seu salario atual:");
scanf("%f",&salario_anterior);
if(salario_anterior <= 280){
	percentual=20;
}else if (salario_anterior <= 750){
	percentual =15;
}else if (salario_anterior<=1500){
	percentual = 10;
}else {
	percentual= 5;
}
diferenca_entre_salario = salario_anterior*(percentual/100);
salario_atual = salario_anterior+diferenca_entre_salario;
printf("\n Seu salario antes do reajuste era de:R$%.2f",salario_anterior);
printf("\n Seu salario foi aumentado em:%.1f%%",percentual);
printf("\n Seu salario foi aumentado em:R$%.2f",diferenca_entre_salario);
printf("\n Seu salario atual e de:R$%.2f",salario_atual);
system("pause");
	return 0;
}
