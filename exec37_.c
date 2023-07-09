#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*Entrar com as notas da Prova1 e Prova2 e imprimir a media final Dica Media truncada e arredondada 3 variaveis em float
 */

int main(int argc, char *argv[]) {
float prova1,prova2,media;
printf("DIGITE A NOTA DA PROVA:");
scanf("%f",&prova1);
printf("DIGITE A NOTA DA PROVA:");
scanf("%f",&prova2);
media = (prova1+prova2)/2;
printf("MEDIA TRUNCADA:%.2f\n",(media-0.5)+0.001);
printf("MEDIA ARRENDONDADA:%.2f\n",media+0.001);
system("pause");

	return 0;
}
