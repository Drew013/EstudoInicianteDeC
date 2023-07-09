#include <stdio.h>
#include <stdlib.h>

/*pesos 1,2,3,4*/

int main(int argc, char *argv[]) {
float N1;
float N2;
float N3;
float N4;
float mediap;
printf("DIGITE UM NUMERO AQUI:");
scanf("%f",&N1);
printf("DIGITE UM NUMERO AQUI:");
scanf("%f",&N2);
printf("DIGITE UM NUMERO AQUI:");
scanf("%f",&N3);
printf("DIGITE UM NUMERO AQUI:");
scanf("%f",&N4);
mediap = (N1+N2+N3+N4)/(1+2+3+4);
printf("Produto final:\n%f\n",mediap);
system("pause");
	return 0;
}
