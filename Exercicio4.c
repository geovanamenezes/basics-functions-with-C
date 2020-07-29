/*
 4. Escreva um programa que receba 5 valores e retorne a média entre eles
*/

#include <stdio.h>
	int main(){
		int num1, num2, num3, num4, num5;
		float media;
		
		printf("Valor 1: ");
		scanf("%d", &num1);
		
		printf("\nValor 2: ");
		scanf("%d", &num2);
		
		printf("\nValor 3: ");
		scanf("%d", &num3);
		
		printf("\nValor 4: ");
		scanf("%d", &num4);
		
		printf("\nValor 5: ");
		scanf("%d", &num5);
		
		media = (float) (num1+num2+num3+num4+num5)/5;
		
		printf("Media = %.1f\n", media );
		
		return 0;
	}
