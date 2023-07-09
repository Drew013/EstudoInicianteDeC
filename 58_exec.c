#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* faça um programa que imprima na tela apenas os numeros impares entre 1 e 50  */

int main(int argc, char *argv[]) {
int i;
for(i=1;i<=50;i+=2){
	printf("%d\n",i);
}	
	return 0;
}
