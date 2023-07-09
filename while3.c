#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* modify the temperature convertion program to print the table in reverse order, that is, from 300 degreese to 0 
Dica 1 variavel */

int main(int argc, char *argv[]) {
int temp;
for(temp=0;temp<=300;temp--);
printf("%d",&temp);
system ("pause");
	return 0;
}
