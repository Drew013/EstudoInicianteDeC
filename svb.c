#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

/* Faça um programa que leia 3 numeros e mostre os em ordem decrescente */

int main(int argc, char *argv[]) {
float num1, num2, num3;
    printf("Digite três números: ");
    scanf("%f %f %f", &num1, &num2, &num3);
if(num1 > num2 && num2> num3)
    {
      printf("%f %f %f", num1,num2,num3); 
    }
    else if(num1 > num3 && num2 > num3)
    {
       printf("%f %f %f",num1,num3,num2); 
    }
    
if(num2 > num1 && num1>num3)
        {
            printf("%f %f %f", num2,num1,num3);
        }
    else if (num2 > num3 && num3 >num2) {
    	printf("%f %f %f", num2,num3,num1);
	} 
    else{
    		printf("%f %f %f", num3,num2,num1);
	}
    


	return 0;
}
