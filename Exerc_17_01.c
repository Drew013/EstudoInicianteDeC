#include <stdio.h>
#include <stdlib.h>

/* Ler um numero real e imprimir ate a a ter�a parte deste numero
Dica: � um numero flutuante
*/

int main(int argc, char *argv[]) {
float numero;
printf("Digite um numero:\n");
scanf("%f",&numero);
printf("terca parte e:%.2f\n",numero /3);
system ("pause");
return 0;
}
