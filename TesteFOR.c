#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 int i;
    int num;

    for (i = 1; i <= 5; i++) {
        printf("Digite um n�mero: ");
        scanf("%d", &num);
        printf("N�mero digitado: %d\n", num);
    }
	return 0;
}