#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* entrar com o numero e imprimir o logaritmo desse numero na base 10 Dica sao duas variavel (em float) */

int main(int argc, char *argv[]) {
float numero,logaritmo;
printf("ENTRE COM LOGARITMO:\n");
scanf("%f",&numero);
logaritmo = log(numero)/log(10);
printf("LOGARITMO: %.2f\n",logaritmo);
system("pause");
return 0;
}
