#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* entrar com um numero e imprimir a seguinte saida: numero,quadrado,raiz quadrada
Dica 3 variaveis float ou(double)*/

int main(int argc, char *argv[]) {
float numero,quadrado,raiz;
printf("DIGITE UM NUMERO:");
scanf("%f",&numero);
quadrado = pow(numero,2);
raiz = sqrt(numero);
printf("A RAIZ QUADRADA E:%f\n",raiz);
system("pause");
	return 0;
}
