/* 
Sabe-se que o lat�o � obtido por uma mistura de 7 partes de cobre
e 3 partes de zinco, ou seja, 70% do peso de lat�o � formado por cobre 
e 30% de zinco.
Escreva um programa que receba o valor em kgs de quanto de lat�o deve 
ser produzido, 
e esse indique quantos kgs de cobre e zinco s�o necess�rios. 
*/

#include <stdio.h>

int main(){
	
	float pesoTotal, parteCobre, parteZinco;
	
	printf("Quantidade de lat�o que deve ser produzida: \n");
	scanf("%f", &pesoTotal);
	
	parteCobre = pesoTotal * 0.7;
	parteZinco = pesoTotal *0.3;
	
	printf("\nQuilos de Cobre necess�rios: %.1f ", parteCobre);
	printf("\nQuilos de Zinco necess�rios: %.1f ", parteZinco);
	
	return 0;
	
}

