#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
/* Faça um programa para a leitura de duas notas parciais de um aluno.
o programa deve calcular a media alcançada por aluno e apresentar :
a mensagem "APROVADO"se a media alcançada for maior ou igual a 7 
a mensagem "REPROVADO", se a media for menor do que 7.
a mensagem "APROVADO COM DISTINÇAO", se media for igual a 10 
Dicas : 3variaveis em float  */

int main(int argc, char *argv[]) {
float nota1,nota2,media;
printf("Digite a primeeira nota:\n");
scanf("%f",&nota1);
printf("Digite a segunda nota:\n");
scanf("%f",&nota2);
media=nota1+nota2/2;
if(media<7){
	printf("Reprovado\n");
}
else if(media>=7){
	printf("Aprovado\n");
}
else{
	printf("Aprovado com DISTINCAO\n");
}
system("pause");
	return 0;
}
