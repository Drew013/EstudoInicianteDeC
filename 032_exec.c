#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* Entrar com o lado de um quadrado e imprimir o perimetro,area e diagonal
Dica 4 variaveis ,float  */

int main(int argc, char *argv[]) {
float area,diagonal,perimetro,lado;
printf("DIGITE O VALOR DA AREA:\n");
scanf("%f",&lado);
area = lado*lado;
perimetro = 4*lado;
diagonal = sqrt(lado)*2;
printf("RESULTADO DA AREA DO QUADRADO:%.2f\n",area);
printf("RESULTADO DO PERIMETRO DO QUADRADO:%.2f\n",perimetro);
printf("RESULTADO DA DIAGONAL DO QUADRADO:%.2f\n",diagonal);
system("pause");

	return 0;
}
