/*
1 - Fa�a um programa que recebe dois valores e apresente na tela 
- a soma
- a subtra��o
- a multiplica��o
- e a divis�o deles
*/
#include <stdio.h>

int main(){
	
	int num1, num2, soma, sub, mult;
	float div;
	
	printf("Primeiro valor: ");
	scanf("%d", &num1);
	
	printf("\nSegundo valor: ");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	sub = num1 - num2;
	mult = num1 * num2;
	div = (float) num1/num2;
	
	printf("\nSoma = %d", soma);
	printf("\n Subtracao = %d", sub);
	printf("\n Multiplicacao = %d", mult);
	printf("\n Divisao = %.1f", div);
	
	return 0;
}
