#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
/* fa�a um prgrama que receba dois numeros inteiros e gere os numeros inteiros que estao no intervalo  */

int main(int argc, char *argv[]) {
int num0,num1;
printf("Digite um numero:");
scanf("%d",&num0);
printf("Digite um numero:");
scanf("%d",&num1);
for(num0=num0;num0<=num1;num0++){
	printf("O intervalo dos numeros �:%d\n",num0);
}
system("pause");
	return 0;
}
