/*
2. Escreva um programa que receba a medida em metros e retorne a quantidade em centímetros
*/

#include <stdio.h>

int main(){
	
	int m, cm;
	
	printf("Insira o valor em metros: ");
	scanf("%d", &m);
	
	cm = m*100;
	
	printf("\nm = %d m", m);
	printf("\nEm cm: %d cm", cm);
	return 0;
	
}
