#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* Criar um algoritmo que calcule e imprima a area de um losango 
Dica:Float,3 variaveis*/

int main(int argc, char *argv[]) {
float area,Diagonal_M01,Diagonal_M;
printf("DIGITE A DIAGONAL MAIOR:\n");
scanf("%f",&Diagonal_M);
printf("DIGITE A DIAGONAL MENOR:\n");
scanf("%f",&Diagonal_M01);
area = Diagonal_M*Diagonal_M01/2;
printf("AREA DO LOSANGO E:%.2f\n",area);
system("pause");

	return 0;
}
