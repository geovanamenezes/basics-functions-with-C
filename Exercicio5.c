/*
Escreva um programa que leia o pre�o de uma refei��o e retorne o valor dos 10% do gar�om. 
 
*/

#include <stdio.h>

int main(){
	float valorRefeicao;
	float porcentagem;
	
	printf("Valor da refeicao: ");
	scanf("%f", &valorRefeicao);
	
	porcentagem = (valorRefeicao*10)/100;
	
	printf("\nPorcentagem do atendente: %.1f", porcentagem);
	
	return 0;
}
