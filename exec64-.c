#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
/* A serie de fibonacci é formada pela sequencia 1,1,2,2,3,5,8... faça um programa capaz de de gerar a serie ate  o nesimo
termo 
Dica use for 4 variaveis em int*/

int main(int argc, char *argv[]) {
 int num=0;
 int v1=1;
 int v2=1;
 int v3=0; 
 printf("Número de elementos:");
 scanf("%d",&num);
 for(v1=1;v1<=num;v1++){
  v3 = v1 + v2;
  v1 = v2;
  v2 = v3;
  printf("\n%d",v3);
 } 
 return 0;
}
