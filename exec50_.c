#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* Imprimir o quadrado DOS numeros de um ate vinte
dica: for em int */

int main(int argc, char *argv[]) {
int I,R;
for (I = 1; I<=20; I++){
R = pow(I,2);
printf("%d\n",&R);
}
system("pause");
	return 0;
}
