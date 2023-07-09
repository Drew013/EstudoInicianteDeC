#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

/* Faça um programa que pergunte em que turno voce estuda .
peça para digitar M-matutino ou V-vespertino ou N-noturno.
imprima a mensagem "Bom Dia,Boa tarde ou Boa noite ou valor invalido conforme o caso */

int main(int argc, char *argv[]) {
char turno;
printf("Digite o turno(Apenas com uma letra):");
scanf("%c",&turno);
if(turno == 'V'||turno == 'v'){
	printf("Boa Tarde!\n");
}
else if(turno == 'M' || turno == 'm'){
	printf("Bom Dia!\n");
}
else if(turno == 'N'|| turno == 'n'){
	printf("Boa Noite!\n");
}
else{
	printf("Valor Invalido\n");
}
system("pause");
	return 0;
}
