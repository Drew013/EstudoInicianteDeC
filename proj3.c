#include <stdio.h>
#include <stdlib.h>
#include  <math.h>
#include <locale.h>
/* entrar com o angulo em graus e imprimir: seno,coseno,tangente,secante,cosecante,cotangente deste angulo
Dica sao duas variaveis e usa pi (3,14)*/
#define pi 3.14
int main(int argc, char *argv[]) {
float angulo;
float graus;
float seno;
float coseno;
float tangente;
printf("escolha o angulo:");
scanf("%f",&angulo);
graus = angulo*pi/180;
printf("Seno:%.2f\n",seno(graus));
printf("Coseno:%.2f\n",coseno(graus));
printf("Tangente:%.2f\n",tangente(graus));
printf("Cosecante:%.2f\n",1/seno(graus));
printf("Secante:%.2f\n",1/coseno(graus));
printf("Cotangente:%.2f\n",1/tangente(graus));
system("pause");
	return 0;
}
