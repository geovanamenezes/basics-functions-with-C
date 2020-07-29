/*
3. Escreva um programa que receba uma medida em centímetros e retorne a quantidade em metros. 
*/

#include <stdio.h>
	int main(){
		
		int cm;
		float m;
		
		printf("Valor em cm: ");
		scanf("%d", &cm);
		
		m = (float) cm/100;
		
		printf("\nValor em m: %.2f", m);
		
		return 0;
	}
