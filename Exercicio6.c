/* 
Sabe-se que o latão é obtido por uma mistura de 7 partes de cobre
e 3 partes de zinco, ou seja, 70% do peso de latão é formado por cobre 
e 30% de zinco.
Escreva um programa que receba o valor em kgs de quanto de latão deve 
ser produzido, 
e esse indique quantos kgs de cobre e zinco são necessários. 
*/

#include <stdio.h>

int main(){
	
	float pesoTotal, parteCobre, parteZinco;
	
	printf("Quantidade de latão que deve ser produzida: \n");
	scanf("%f", &pesoTotal);
	
	parteCobre = pesoTotal * 0.7;
	parteZinco = pesoTotal *0.3;
	
	printf("\nQuilos de Cobre necessários: %.1f ", parteCobre);
	printf("\nQuilos de Zinco necessários: %.1f ", parteZinco);
	
	return 0;
	
}

