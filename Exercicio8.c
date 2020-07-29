/*
Sabe-se que o preço de um piso é de R$ 7,00 o metro quadrado e que cada peça
possui 30 cm x 30 cm. Escreva um programa que receba uma área (em metros
quadrados) e retorne quantas peças serão necessárias e o valor total.
*/

#include <stdio.h>

int main(){
	float area, valorTotal, qtdPecas;
	
	printf("Área em metros: \n");
	scanf("%f", &area);
	
	qtdPecas = area/0.09;
	valorTotal = area * 7.0;
	
	printf("Quantidade de peças a serem compradas: %.1f\n", qtdPecas);
	printf("Valor total: R$%.2f", valorTotal);
	
	return 0;
}
