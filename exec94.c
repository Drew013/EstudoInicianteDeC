#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
/* Faça que programa que calcule as raizes do segundo grau, na forma (Ax²+Bx+C).
O programa devera pedir os valores de A,B e C e fazer conscentencia, informando 
ao usuario as seguintes situaçoes:Se o usuario informar o valor de A = 0, A equa
cao nao e de segundo grau, os demais valores sao encerrados.
Se o delta calculado for negativo, a equaçao nao possui raizes reais.
Informe ao usuario e encerre o programa.
Se o delta for igual a 0 a equaçao possui apenas uma raiz real informe ao usuario.
se o delta fo r positivo, a equaçao possui duas raizes reais e informe ao usuario
Dica:Usar 6 variaveis em float, Usar getchar,usar pow  */

int main(int argc, char *argv[]) {
float delta,funcao,numA,numB,numC,numX;
printf("Digite um numero:");
numA = getchar();
getchar();
printf("Digite um numero:");
numB = getchar();
getchar();
printf("Digite um numero:");
numC = getchar();
getchar();
printf("Digite um numero:");
numX = getchar();
getchar();
if(numA == 0){
	numA = 0;
	    printf("Esta Equacao e:Invalido\n");	    
}
else if(delta < 0){
	delta = (numB*numB)-4*numA*numC;
	funcao = (numA*(numX*numX)+numB*numX+numC);
    printf("Resultado da funcao:%f\n",funcao);
    printf("Resultado de Delta:%f\n",delta);
    printf("Esta equacao nao possui raizes\n");
}
else if(delta == 0){
    delta = (numB*numB)-4*numA*numC;
	funcao = (numA*(numX*numX)+numB*numX+numC);
    printf("Resultado da funcao:%f\n",funcao);
    printf("Resultado de Delta:%f\n",delta);
	printf("Esta equacao possui uma Raiz\n");
}
else if(delta > 0){
	delta = (numB*numB)-4*numA*numC;
	funcao = (numA*(numX*numX)+numB*numX+numC);
    printf("Resultado da funcao:%f\n",funcao);
    printf("Resultado de Delta:%f\n",delta);
	printf("Esta equacao possui duas Raiz\n");
}
else{

}
	return 0;
}
