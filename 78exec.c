#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/*Um funcionario de uma empresa recebe o aumento salarial anualmente.
sabe se que:que esse funcionario foi contratado em 1995,com o salario inicial de 1k 
em 1996 recebeu um aumento de 1.5% sobe seu salario inicial;
apatir de 1997 (inclusive),os aumentos salarias sempre corresponde ao dobro do percen
tual do ano anterior.
faça um programa que determine o salario atual desse funcionario.
apos concluir, altere o programa permitido que o usuario digite o salario inicial do fun-
cionario
Dica:4 variaveis (2 em int e 2 float)*/

int main(int argc, char *argv[]) {
int ano,ano_cont;
float salario,aumento;
printf("Digite o salario inicial em 1995:");
scanf("%d",&salario);
ano_cont = 1995;
printf("Digite em que anos estamos:");
scanf("%d",&ano);
aumento = 1.5/100;
while(ano<ano_cont){
	salario*=1+aumento;
	aumento*=2;
	
	ano++;
	
}
printf("O salario%d e de R$ %.2f",ano,salario);
system("pause");
	return 0;
}
