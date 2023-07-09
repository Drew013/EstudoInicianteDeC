#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* Entrar com os valores para Xnum1,Xnum2 e Xnum3 e imprimir o valor de X, sabendo se
que X= Xnum1+Xnum2/3(Xnum1-Xnum2)+log64 **2 Xnum3+Xnum1
Dica:4 variaveis  */

int main(int argc, char *argv[]) {
float X1,X2,X3,X;
printf("ENTRE COM O PRIMEIRO VALOR:\n");
scanf("%f",&X1);
printf("ENTRE COM O SEGUNDO VALOR:\n");
scanf("%f",&X2);
printf("ENTRE COM O TERCEIRO VALOR:\n");
scanf("%f",&X3);
X = X1+X2/(X3+X1)+2*(X1=X2)+log(64)/log(2);
printf("X=%.2f\n",X);
system("pause");	
	return 0;
}
