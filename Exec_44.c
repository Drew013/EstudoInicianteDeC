#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* criar um algoritmo que receba um numero real, calcular e imprimir;
-aparte inteira do numero, -a parte fracionaria do numero, -um numero arredondado;
Dicas:4 variaveis 2 em int e 2 float (calculo de numeros fracionarios) */

int main(int argc, char *argv[]) {
int NumI,NumAr;
float NumR,NumF;
double ceil (double NumR);
double floor (double NumR);
NumR = 12.3;
NumF =  (NumR)/2.3;
NumAr = ceil(NumR);
NumI = floor(NumR);
printf("O numero real e:%.2f\n",NumR);
printf("O numero fracinado e:%.2f\n",NumF);
printf("O numero arrendondado e:%.2d\n",NumAr);
printf("O numero inteiro e:%.2d\n",NumI);
system("pause");
	return 0;
}
