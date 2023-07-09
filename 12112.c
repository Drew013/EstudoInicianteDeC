#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
