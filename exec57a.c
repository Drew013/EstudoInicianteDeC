#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* leia varias idades e calcule a media entre as idades usar uma para idade
dica 3 variaveis em int e 1 em float  */

int main(int argc, char *argv[]) {
int idades,somaidades = 0,qtdidades,cont;
float media;
printf("quantas idades seram utilizadas?\n");
scanf("%d",&qtdidades);
for(cont=1;cont<=qtdidades;cont++){
	printf("Entre com a idade%d",cont);
	scanf("%d",&idades);
	somaidades=somaidades+idades;
}
media = somaidades/qtdidades;
printf("\n a media de idades e de:%.1f",media);
	return 0;
}
