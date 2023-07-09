#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
char nome[100],sobrenome[100];
printf("digite seu nome \n");
scanf("%s",nome);
printf("digite seu sobrenome");
scanf("%s",sobrenome);
printf("seu nome e : \n%s\n",nome);
printf("seu sobrenome e : \n%s\n",sobrenome);
system("pause");
	return 0;
}
