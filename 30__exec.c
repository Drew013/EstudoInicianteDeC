#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* Entrar com a base e altura de  um retangulo e imprimir a seguinte saida, perimetro, area , diagonal Dica:5 variaveis 
Perimetro,area e diagonal do retangulo  */

int main(int argc, char *argv[]) {
float perimetro,area,diagonal,base,altura;
printf("DIGITE A BASE:\n");
scanf("%f",&base);
printf("DIGITE A ALTURA:\n");
scanf("%f",&altura);
perimetro = 2*(base+altura);
area = base*altura;
diagonal = sqrt(base*2+altura*2);
printf("PERIMETRO:%.2f\n",perimetro);
printf("AREA:%.2f\n",area);
printf("DIAGONAL:%.2f\n",diagonal);
system("pause");
	return 0;
}
