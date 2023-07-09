#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
/*Faça um programa que le as duas notas parciais obtidas por um aluno numa disciplina ao
longo de um semestre, e calcule a sua media atribuiçao de conceitos obdece a tabela abaxo
media de aproveitamento conceito entre nove e dez conceito (a) entre 7,5 e 9 Conceito (b)
entre 6  e 7,5 conceito C entre 4 e 6 conceito D entre 4 e 0 conceito E.
O algoritmo deve mostrar na tela as notas, a media,o conceito correspondente e mensagem
"Aprovado"se o conceito for A B C ou "reprovado" se o conceito for D ou E
Dica variavel char (aproveitamento)*/

int main(int argc, char *argv[]) {
float media,nota1,nota2,resultado;
char aproveitamento[10]='A','B','C','D','E';
printf("Digite uma nota:");
scanf("%f",&nota1);
printf("Digite uma nota:");
scanf("%f",&nota2);
if(media <= resultado){
	media = nota1+nota2/2;
	resultado = nota1+nota2;
	aproveitamento = 'E';
	printf("Sua media foi:%.2f\n",media);
	printf("Sua nota primeira nota:%.2f\n Sua segunda nota %.2f\n",nota1,nota2);
	printf("Seu Aproveitamento foi igual a:%c\n",aproveitamento);
}
else if(media <= 4){

media = nota1+nota2/2;
	printf("Sua media foi:%.2f\n",media);
	printf("Sua nota primeira nota:%.2f\nSua segunda nota:%.2f\n",nota1,nota2);
	printf("Seu Aproveitamento foi igual a:%c\n",aproveitamento);
}
else if (media <= 7.5){
	media = nota1+nota2/2;
	printf("Sua media foi:%.2f\n",media);
	printf("Sua nota primeira nota:%.2f\n Sua segunda nota %.2f\n",nota1,nota2);
	printf("Seu Aproveitamento foi igual a:%c\n",aproveitamento);
}
else if (media <= 9){

media = nota1+nota2/2;
	printf("Sua media foi:%.2f\n",media);
	printf("Sua nota primeira nota:%.2f\n Sua segunda nota %.2f\n",nota1,nota2);
	printf("Seu Aproveitamento foi igual a:%c\n",aproveitamento);
}
else (media == 10);{
	media = nota1+nota2/2;
	printf("Sua media foi:%.2f\n",media);
	printf("Sua nota primeira nota:%.2f\n Sua segunda nota %.2f\n",nota1,nota2);
	printf("Seu Aproveitamento foi igual a:%c\n",aproveitamento);
}


	return 0;	
}
