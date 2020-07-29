/*
Sabe-se que o pre�o de um piso � de R$ 7,00 o metro quadrado e que cada pe�a
possui 30 cm x 30 cm. Escreva um programa que receba uma �rea (em metros
quadrados) e retorne quantas pe�as ser�o necess�rias e o valor total.
*/

#include <stdio.h>

int main(){
	float area, valorTotal, qtdPecas;
	
	printf("�rea em metros: \n");
	scanf("%f", &area);
	
	qtdPecas = area/0.09;
	valorTotal = area * 7.0;
	
	printf("Quantidade de pe�as a serem compradas: %.1f\n", qtdPecas);
	printf("Valor total: R$%.2f", valorTotal);
	
	return 0;
}
