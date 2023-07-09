#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/*Um funcionario de uma empresa recebe o aumento salarial anualmente.
sabe se que:que esse funcionario foi contratado em 1995,com o salario inicial de 1k 
em 1996 recebeu um aumento de 1.6% sobe seu salario inicial;
apatir de 1997 (inclusive),os aumentos salarias sempre corresponde ao dobro do percen
tual do ano anterior.
faça um programa que determine o salario atual desse funcionario.
apos concluir, altere o programa permitido que o usuario digite o salario inicial do fun-
cionario
Dica:4 variaveis (2 em int e 2 float)*/

int main(int argc, char *argv[]) {
int sal_inicial,ano_cont;
float sal_aumento,per_dobro;
ano_cont = 1995;
sal_aumento = 1.6;
per_dobro = 3.2;
printf("Digite o salario inicial:");
scanf("%d",&sal_inicial);
while (sal_inicial=sal_inicial){
	sal_aumento = sal_inicial*(sal_aumento/100);
	per_dobro = sal_inicial*(per_dobro/100);
	printf("Ano do contrato",ano_cont);
	printf("O ano do contrato e:%d\n",ano_cont);
	printf("O seu salario inicial e:%d\n",sal_inicial);
	printf("O aumento do salario no proximo ano sera de:%2.f\n",sal_aumento);
	printf("O dobro de seu aumento sera de:%2.f\n",per_dobro);
	sal_inicial++;
}
system("pause");
	return 0;
}
