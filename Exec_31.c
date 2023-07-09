#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* Entrar com o raio de um circulo e imprimir a seguinte saida, Area e perimetro
DICA:3 Variaveis e 3,14*/

int main(int argc, char *argv[]) {
float raio;
float area;
float perimetro;
printf("DIGITE  O RAIO:");
scanf("%f",&raio);
raio = 2*(3.14)*raio;
perimetro = 2*(3.14)*raio;
area = 3.14*raio*raio;
printf("RESULTADO DA AREA:%f\n",area);
printf("RESULTADO DO RAIO:%f\n",raio);
printf("RESULTADO DO PERIMETRO:%f\n",perimetro);
system("pause");
	return 0;

}
