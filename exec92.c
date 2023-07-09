#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Faça um programa que leia um numero e exiba o dia correspondente da semana (dominho = 1,segunda = 2 e etc),
Se digitar deve aparecer o valor invalido 
Duas variaveis em int e 1 em char com Strncpy Strncmp */

int main(int argc, char *argv[]) {
int dia_int;
char dia_str[40]="";
printf("Digite um numero do dia da semana:");
scanf("%i",&dia_int);
if (dia_int == 1){
	strcpy(dia_str,"Domingo");	
}
else if(dia_int == 2){
	strcpy(dia_str,"Segunda");
}
else if(dia_int == 3){
	strcpy(dia_str,"Terca");	
}
else if(dia_int == 4){
	strcpy(dia_str,"Quarta");
}
else if(dia_int == 5){
	strcpy(dia_str,"Quinta");
}
else if(dia_int == 6){
	strcpy(dia_str,"Sexta");
}
else if(dia_int == 7){
	strcpy(dia_str,"Sabado");
}
if(strcmp(dia_str,"")){
	pritnf("O dia correspondente e:%s\n",dia_str);
}
else{
	pirntf("Valor Invalido\n");
}
system("pause");
	return 0;
}
