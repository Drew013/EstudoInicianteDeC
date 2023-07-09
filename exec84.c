#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
/* Faça um programa que pergunte o preço de 3 produtos e informe qual produto vpce deve
comprar, sabendo que a decisao e sempre pelo mais barato 
Dica 3 variaveis em float  */

int main(int argc, char *argv[]) {
float preco1,preco2,preco3;
printf("Digite um preco:");
scanf("%f",preco1);
printf("Digite um preco:");
scanf("%f",preco2);
printf("Digite um preco:");
scanf("%f",preco3);
if (preco1<=preco2 && preco1<=preco3){
	printf("O preco menor e:%.2f\n");
}
else if(preco2<=preco1 && preco2<=preco3){
	printf("O preco menor e:%.2f\n");
}
else{
    printf("O preco menor e:%.2f\n");
}
system("pause");
	return 0;
}
