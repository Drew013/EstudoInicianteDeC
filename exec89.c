#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

/* As organizaçoes tabajara resolveram dar um aumento de salario aos seus colaboradores 
e lhe contrataram para desenvolver o programa que calcula os reajustes 
Faça um programa que recebe o salario de um colaborador e o reajuste segundo o seguinte
criterio,baseado no salariio atual:salarios ate 280 aumento de 20%, salarios entre 280 e 
700 aumento
de 15%, salarios entre 700 e 1.5k aumento de 10%, salarios de 1.5k em diante aumento de 5%
Apos o aumento ser realizado,informe na tela:O salario anterior,
o percentual de aumento aplicado,O valor do aumento,O salario apos o aumento
Dica:4variaveis em float */

int main(int argc, char *argv[]) {
float salario,aumento,salario_aumento,reajuste;
printf("Digite seu salario:");
scanf("%f",&salario);
if(salario == 280){
	salario_aumento = 20*salario/100;
	reajuste = salario+salario_aumento;
    printf("O aumento de salario e:%.2f\n",salario_aumento);
    printf("Salario antigo:%.2f\n",salario);
    printf("O salario atual apos o aumento:%.2f\n",reajuste);
}
else if(salario >= 280 || salario == 700){
	salario_aumento = 15*salario/100;
	reajuste = salario+salario_aumento;
    printf("O aumento de salario e:%.2f\n",salario_aumento);
    printf("Salario antigo:%.2f\n",salario);
    printf("O salario atual apos o aumento:%.2f\n",reajuste);
}
else if(salario >= 700 ||salario == 1.500){
	salario_aumento = 10*salario/100;
	reajuste = salario+salario_aumento;
    printf("O aumento de salario e:%.2f\n",salario_aumento);
    printf("Salario antigo:%.2f\n",salario);
    printf("O salario atual apos o aumento:%.2f\n",reajuste);
}
else(salario == 1.500);{
	salario_aumento = 5*salario/100;
	reajuste = salario+salario_aumento;
    printf("O aumento de salario e:%.2f\n",salario_aumento);
    printf("Salario antigo:%.2f\n",salario);
    printf("O salario atual apos o aumento:%.2f\n",reajuste);
}
system("pause");

	return 0;
}
