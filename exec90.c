
#include <stdio.h>
#include <stdlib.h>

/* Faça um programa para o calculo de uma folha de pagamento, sabendo desconto sao do 
Imposto de renda, que depende do salario bruto conforme a tabela abaixo e de 10%
para o INSS que o FGTS corresponde a 11% do salario bruto ,mas nao e descontado 
ea empresa que deposita..
O salario liquido corresponde ao salario bruto menos os descontos.O programa devera
pedir ao usuario o valor da sua hora e quantidades de horas trabalhadas no mes.
desconto do IR salario bruto ate R$900 isento ,salario bruto ate 1500 desconto inclusivo
de 5% e salario bruto ate 2500 desconto de 10% e salario bruto acima de 2500 %20
Imprima na tela as informações, desposta conforme o exemplo abaixo
Valor de hora é igual 5 e quantidade de hora 220
Exemplo:Salario bruto (5*220)=1100 Desconto IR =55 Desconto INSS =110 FGTS DEsconto=165
Salario liquido é de 935
Dica 9 variaveis em float  */

int main(int argc, char *argv[]) {
float salario_bruto,INSS,FGTS,IR,valor_hora,horas_trabalho,total_desconto,salario_liquido;
float desconto_IR;
printf("Digite o valor da horas trabalhadas:");
scanf("%f",&horas_trabalho);
printf("Digite a quantidade de horas trabalhadas:");;
scanf("%f",&valor_hora);
if(salario_bruto <= 900){
	salario_bruto = horas_trabalho*valor_hora;
	IR = IR;
	desconto_IR = IR;
	INSS = (salario_bruto*10/100);
	FGTS = (salario_bruto*11/100);
	salario_liquido = salario_bruto-desconto_IR-FGTS-INSS;
	total_desconto = IR-FGTS-INSS;
	printf("Salario bruto:%.2f\n",salario_bruto);
	printf("Salario liquido:%.2f\n",salario_liquido);
	printf("Valor depositado pela empresa do FGTS:%.2f\n",FGTS);
	printf("Valor descontado no INSS:%.2f\n",INSS);
	printf("Valor do IR:%.2f\n",desconto_IR);
	printf("Total do valor descontado:%.2f\n",total_desconto);
}
else if(salario_bruto == 1500 || salario_bruto < 1500){
    salario_bruto = horas_trabalho*valor_hora;
	IR = (salario_bruto*5/100);
	desconto_IR = IR;
	INSS = (salario_bruto*10/100);
	FGTS = (salario_bruto*11/100);
	salario_liquido = salario_bruto-desconto_IR-FGTS-INSS;
	total_desconto = IR-FGTS-INSS;
	printf("Salario bruto:%.2f\n",salario_bruto);
	printf("Salario liquido:%.2f\n",salario_liquido);
	printf("Valor depositado pela empresa do FGTS:%.2f\n",FGTS);
	printf("Valor descontado no INSS:%.2f\n",INSS);
	printf("Valor do IR:%.2f\n",desconto_IR);
	printf("Total do valor descontado:%.2f\n",total_desconto);
}
else if(salario_bruto <= 2500){
	salario_bruto = horas_trabalho*valor_hora;
	IR = 10/100;
	desconto_IR = IR;
	INSS = (salario_bruto*10/100);
	FGTS = (salario_bruto*11/100);
	salario_liquido = salario_bruto-desconto_IR-FGTS-INSS;
	total_desconto = IR-FGTS-INSS;
	printf("Salario bruto:%.2f\n",salario_bruto);
	printf("Salario liquido:%.2f\n",salario_liquido);
	printf("Valor depositado pela empresa do FGTS:%.2f\n",FGTS);
	printf("Valor descontado no INSS:%.2f\n",INSS);
	printf("Valor do IR:%.2f\n",desconto_IR);
	printf("Total do valor descontado:%.2f\n",total_desconto);
}
else if (salario_bruto >= 2500) {
	salario_bruto = horas_trabalho*valor_hora;
	IR = (salario_bruto*20/100);
	desconto_IR = IR;
	INSS = (salario_bruto*10/100);
	FGTS = (salario_bruto*11/100);
	salario_liquido = salario_bruto-desconto_IR-FGTS-INSS;
	total_desconto = IR-FGTS-INSS;
	printf("Salario bruto:%.2f\n",salario_bruto);
	printf("Salario liquido:%.2f\n",salario_liquido);
	printf("Valor depositado pela empresa do FGTS:%.2f\n",FGTS);
	printf("Valor descontado no INSS:%.2f\n",INSS);
	printf("Valor do IR:%.2f\n",desconto_IR);
	printf("Total do valor descontado:%.2f\n",total_desconto);
}
system("pause");
	return 0;
}
