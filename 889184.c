#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
/* Faça um programa que verifique se uma letra digitada é "F" ou "M" conforme a letra escrever:
F = feminino M = masculino
 */

int main(int argc, char *argv[]) {
char sexo;
printf("Digite F para feminino ou M para masculino\n");
scanf("%c",&sexo);
if (sexo =='F' ||sexo=='f'){
	printf("Feminino\n");
}
else if (sexo=='M'||sexo=='m'){
	printf("masculino\n");
}
else{
	printf("Sexo invalido");
}
system("pause");
	return 0;
}
