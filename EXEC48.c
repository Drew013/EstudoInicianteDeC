#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* imprimir os 100 primeiros pares 
Dica:For */

int main(int argc, char *argv[]) {
int i;
for (i = 2;i <= 200; i=i+2);{
printf("%d\n",i);
}
system("pause");
	return 0;
}
