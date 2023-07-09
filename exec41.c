#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* Em epocas de pouco dinheiro, os comerciantes estao procurando aumentar suas vendas oferecendo desconto.
Faça um algoritmo que possa entrar com o valor de um produto e imprima o novo valor tendo em vista que o desconto foi de 
Nove porcento
DICA:duas variaves em float/desconto*/

int main(int argc, char *argv[]) {
float desconto,produto;
printf("Digite o valor do produto:");
scanf("%f",&produto);
desconto = produto-00.9;
printf("Novo valor apos o desconto:%.2f\n",desconto);
system("pause");
	return 0;
}
